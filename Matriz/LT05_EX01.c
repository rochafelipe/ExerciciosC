#include <stdio.h>
#include <stdlib.h>

//LT05_EX01: Elabore um algoritmo para ler uma matriz 4 x 4,
//conte e escreva quantos valores maiores que 10 ela possui.



int main()
{
    vetorMatrizMaior10();
    return 0;
}

void vetorMatrizMaior10()
{

    int matriz[4][4];
    int linha;
    int coluna;
    int contador = 0;

    for(linha = 0; linha < 4; linha++)
    {

        for(coluna = 0; coluna < 4; coluna++)
        {
           matriz[linha][coluna] = rand();

           //captura os maiores que 10
           if(matriz[linha][coluna] > 10)
           {
               contador += 1;
           }

        }
    }

    printf("%d", contador);

}

