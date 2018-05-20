#include <stdio.h>

//LT04_EX04: Ler 50 valores reais e armazenar em um vetor. Modifique o vetor de modo que
//os valores das posições impares sejam aumentados em 5%, e os das posições pares sejam aumentados em 2%.
//Imprima depois o vetor resultante.



int main()
{
    vetorNumerosReaisAjustado();

    return 0;
}

void vetorNumerosReaisAjustado()
{

  float vetor[50];
  int i;
  float numero;


  for(i = 0; i < 50; i++)
  {

      scanf("%f", &numero);

      vetor[i] = numero;

        if(i%2 == 0)
        {
             vetor[i] +=  (vetor[i] *0.02); //2%
        }else
        {
          vetor[i] +=   (vetor[i] *0.05); //5%
        }
  }

}
