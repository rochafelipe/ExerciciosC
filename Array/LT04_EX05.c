#include <stdio.h>

//LT04_EX05: Faça um programa em Linguagem C para criar um vetor real de 20 posições:
// as 10 primeiras são informadas pelo usuário, e as 10 seguintes são os mesmos números em ordem
//inversa.


int main()
{
    vetor10Inverso10();

    return 0;
}

void vetor10Inverso10()
{

    float vetor[20];
    int i;
    float numero;

    for(i =0; i <10; i++)
    {
        scanf("%f", &numero);

        vetor[i] = numero;

    }

    for(i = 19; i >= 10;i--)
    {

        vetor[i] = vetor[19-i];
    }

    for(i = 0; i < 20;i++)
    {
        printf("%f\n", vetor[i]);

    }

}
