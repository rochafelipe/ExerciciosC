#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415


float calcularCustoLatas(float altura, float raio, float preco_lata);

int main()
{
    printf("Resultado = %f",calcularMedia(6,7,8,9));
    return 0;
}

float calcularCustoLatas(float altura, float raio, float preco_lata)
{
    #define capacidade_lata 5*3


    float area = 2 * PI * raio * (altura + raio);
    float qtd_latas = area / capacidade_lata;
    float custo_total = qtd_latas * preco_lata;

    return custo_total;
}
