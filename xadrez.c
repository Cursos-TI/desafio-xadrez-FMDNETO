//PROGRAMA PARA MOVIMENTO DE TORRE, RAINHA, BISPO E CAVALO NO XADREZ
// DESAFIO AVANÇADO
#include <stdio.h>

//FUNÇÃO PARA MOVIMENTO DA TORRE
void movimentoTorre(int movimentoX)
{
    // A TORRE se move 5 casas para DIREITA
    
    if (movimentoX >= 1) // verifica se o número de casas é maior que 0
    {
        movimentoTorre(movimentoX - 1); // chama a função recursivamente para o próximo movimento
        printf("A TORRE está na casa %c1.\n", 'A' + movimentoX-1);
    }
} 

//FUNÇÃO PARA MOVIMENTO DA RAINHA
void movimentoRainha(int movimentoX)
{
    // A RAINHA se move 8 casas para BAIXO
    if (movimentoX >= 1) // verifica se o número de casas é maior que 0
    {
        printf("A RAINHA está na casa H%d.\n", movimentoX);
        movimentoRainha(movimentoX - 1); // chama a função recursivamente para o próximo movimento
    }
}

//FUNÇÃO PARA MOVIMENTO DO BISPO
void movimentoBispo(int movimentoX, int movimentoY)
{
    // O BISPO se move 5 casas para DIAGONAL DIREITA
    if (movimentoX <= 5 && movimentoY <= 5) // verifica se a posição do BISPO está dentro do tabuleiro
    {
        printf("O BISPO está na casa %c%d.\n", 'A' + movimentoX - 1, movimentoY); // converte a posição da coluna para letra
        // 'A' + movimentoX - 1 converte o número da coluna para a letra correspondente
        
        movimentoBispo(movimentoX + 1, movimentoY + 1); // chama a função recursivamente para o próximo movimento
    }
}


int main()
{
    int movimentoX, movimentoY;
    printf("Ilustrando um Tabuleiro de Xadrez:\n"); //somente para ilustrar o tabuleiro
    printf("  A  B  C  D  E  F  G  H\n");
    printf("8 [] [] [] [] [] [] [] []\n");
    printf("7 [] [] [] [] [] [] [] []\n");
    printf("6 [] [] [] [] [] [] [] []\n");
    printf("5 [] [] [] [] [] [] [] []\n");
    printf("4 [] [] [] [] [] [] [] []\n");
    printf("3 [] [] [] [] [] [] [] []\n");
    printf("2 [] [] [] [] [] [] [] []\n");
    printf("1 [] [] [] [] [] [] [] []\n");
    printf("  A  B  C  D  E  F  G  H\n");
    
    //inicio do movimento da torre com FOR
    printf("A TORRE irá se mover 5 casas para DIREITA.\n");
    printf("Inicia o movimento na casa A1.\n");
    movimentoTorre(5); // chama a função para o movimento da TORRE

    //inicio movimento RAINHA com WHILE
    printf("A RAINHA irá se mover 8 casas para BAIXO.\n");
    printf("Inicia o movimento na casa H8.\n");
    movimentoRainha(8); // chama a função para o movimento da RAINHA

    //inicio movimento BISPO com DO WHILE
    printf("O BISPO irá se mover 5 casas para DIAGONAL DIREITA.\n");
    printf("Inicia o movimento na casa A1.\n");
    movimentoBispo(1,1); // chama a função para o movimento do BISPO

    //INICIO DO MOVIMENTO DO CAVALO COM LOOPS ANINHADOS PARA O MOVIMENTO DO AVENTUREIRO
    printf("O CAVALO irá se mover DUAS casas para baixo e UMA casa para a esquerda.\n");
    printf("Inicia o movimento na casa B3 e terminará na A1.\n");
    movimentoX = 2; // posição inicial do CAVALO na coluna B
    movimentoY = 3; // posição inicial do CAVALO na linha 3
    // Loop aninhado para o movimento do CAVALO
    // O CAVALO se move duas casas para baixo e uma casa para a esquerda
    printf("O CAVALO está na casa %c%d.\n", movimentoX + 'A' - 1, movimentoY); // converte a posição da coluna para letra
    for (movimentoX = 1; movimentoX >= 1; movimentoX--)
    {
        printf("O CAVALO está na casa %c%d.\n", movimentoX + 'A' - 1, movimentoY);
        for (movimentoY = 3; movimentoY >= 1; movimentoY--) 
        {
            printf("O CAVALO está na casa B%d.\n", movimentoY);
        }
        printf("O CAVALO está na casa A%d.\n", movimentoX);
    }
}
