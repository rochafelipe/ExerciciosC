#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
//contratos das funções
double calcularMedia(int n1, int n2, int n3, int n4);
float calcularArea(float raio);
float calcularCustoLatas(float altura, float raio, float preco_lata);
float calcularSalario(float qtd_hs_trabalhadas, float qtd_hs_extras, float qtd_hs_ausente, float valor_salario_min);

int main()
{
    printf("Média = %lf",calcularMedia(6,7,8,9));
    return 0;
}


double calcularMedia(int n1, int n2, int n3, int n4)
{
    return (n1 + n2 + n3 + n4) / 4;
}

float calcularArea(float raio)
{
    float area = PI * pow(raio,2);

    return area;
}

float calcularCustoLatas(float altura, float raio, float preco_lata)
{
    #define capacidade_lata 5*3


    float area = 2 * PI * raio * (altura + raio);
    float qtd_latas = area / capacidade_lata;
    float custo_total = qtd_latas * preco_lata;

    return custo_total;
}

float calcularSalario(float qtd_hs_trabalhadas, float qtd_hs_extras, float qtd_hs_ausente, float valor_salario_min)
{
    #define pc_tb_ausente 0.04
    #define pc_extras 0.06
    #define pc_inss 0.11


  float total_hs_trabalhadas = qtd_hs_trabalhadas * pc_tb_ausente;
  float total_hs_extras = qtd_hs_extras * pc_extras;
  float total_hs_ausente = qtd_hs_ausente * pc_tb_ausente;

  float valor_final = (total_hs_trabalhadas + total_hs_extras) - total_hs_ausente;
   valor_final = valor_final - (valor_final * pc_inss);

  return valor_final;
}


