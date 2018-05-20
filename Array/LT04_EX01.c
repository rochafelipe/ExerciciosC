#include <stdio.h>


//LT04_EX01: Faça um programa em Linguagem C para gerar um vetor de 30 posições,
//onde cada elemento corresponde ao quadrado de sua posição. Imprima depois o vetor resultante.

int main ()
{
    vetorQuadradoPosicao();
    return 0;
}


void vetorQuadradoPosicao()
{
    int vetor[30];
    int i;

    for(i = 0; i < 30; i++)
    {
            vetor[i] = i * 2;
    }

     for(i = 0; i < 30; i++)
    {
            printf("%d\n", vetor[i]);
    }
}
