//PROGRAMA PARA MOVIMNTO DE TORRE 5 CASAS PARA FRENTE
#include <stdio.h>


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
    printf("A torre irá se mover 5 casas para frente.\n");
    printf("Inicia o movimento na casa A1.\n");
    printf("A TORRE se moverá 5 casas para frente.\n");
    for (movimentoY=1;movimentoY<=5;movimentoY++)
    {
        printf("A TORRE está na casa A%d.\n",movimentoY);
        
    }

    //inicio movimento RAINHA com WHILE
    printf("A RAINHA irá se mover 8 casas para ESQUERDA.\n");
    printf("Inicia o movimento na casa H1.\n");
    movimentoX = 8; // posição inicial da RAINHA na coluna H
    while (movimentoX >= 1) // enquanto a linha for maior ou igual a 1
    {
        printf("A RAINHA está na casa H%d.\n", movimentoX);
        
        movimentoX--; // decrementa a posição da RAINHA
    }

    //inicio movimento BISPO com DO WHILE
    printf("O BISPO irá se mover 5 casas para DIAGONAL DIREITA.\n");
    printf("Inicia o movimento na casa A1.\n");
    movimentoX = 1; // posição inicial do BISPO na coluna A
    movimentoY = 1; // posição inicial do BISPO na linha 1
    do
    {
        printf("O BISPO está na casa %c%d.\n", 'A' + movimentoX - 1, movimentoY); // converte a posição da coluna para letra
        // 'A' + movimentoX - 1 converte o número da coluna para a letra correspondente
        
        movimentoX++; // incrementa a posição do BISPO na coluna
        movimentoY++; // incrementa a posição do BISPO na linha
    } while (movimentoX <= 5 && movimentoY <= 5); // enquanto a coluna e linha forem menores ou iguais a 5
}
