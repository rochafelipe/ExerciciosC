#include <stdio.h>
#include <stdlib.h>

//LT05_EX04: Leia uma matriz 4 x 4, imprima a matriz e retorne a
//localização (a linha e a coluna) do maior valor.


int main()
{

    return 0;
}

void maiorDaMatriz()
{

    int matriz[4][4];
    int linha;
    int coluna;
    int maior;

    for(linha = 0; linha < 4; linha++)
    {
        for(coluna =0; coluna < 4 ; coluna++)
        {
            matriz[linha][coluna] = rand();

            if(linha == 0 && coluna ==0)
            {
                maior = matriz[linha][coluna];
            }

            if(matriz[linha][coluna] >= maior)
            {
                maior = matriz[linha][coluna];
            }
        }
    }




}
