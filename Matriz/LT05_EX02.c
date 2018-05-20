#include <stdio.h>
#include <stdlib.h>



//LT05_EX02: Faça um programa em Linguagem C que crie uma matriz 6 x 6
//de valores digitados pelo usuário. Calcule e apresente a soma dos valores da diagonal principal da matriz.


int main()
{
    somaDiagonalPrincipal();

    return 0;
}


void somaDiagonalPrincipal()
{

    int matriz[6][6];
    int linha;
    int coluna;
    int numero;
    int soma;
    for(linha = 0; linha < 6; linha++)
    {
        for(coluna = 0; coluna < 6; coluna++)
        {

           //scanf("%d", &numero);
           matriz[linha][coluna] = rand();
           if(linha == coluna)
           {
               soma += matriz[linha][coluna];
           }
        }
    }

    printf("%d \n",soma);
}
