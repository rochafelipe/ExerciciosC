#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float calcularSalarioFamilia(float salario, int dependentes);
float calcularPrecoVenda (float preco_montadora);
float calcularValorIPI(float valor);
float calcularValorICM(float valor);
float calcularLucro(float valor);
float converterTempCparaF(float temperaturaC);
float calcularConsumoGaloes(float tempoGasto, float velocidade);
float calcularDistanciaPontos(float c1, float c2, float c3, float c4);
int calcularTurmaAlunos(int quantidade_alunos);
int calcularAlunosAvulsos(int quantidade_alunos, int tamanho_turma);


int main()
{
    printf("Hello world!\n");
    return 0;
}

float calcularSalarioFamilia (float salario, int dependentes)
{
  #define pc_dependentes 0.02

  float salario_familia =  (dependentes * pc_dependentes) *  salario;

  return salario_familia;
}

float calcularPrecoVenda (float preco_montadora)
{


  float preco_venda = preco_montadora +
                      calcularValorIPI(preco_montadora) +
                      calcularValorICM(preco_montadora) +
                      calcularLucro(preco_montadora);

   return preco_venda;
}

float calcularValorIPI(float valor)
{
    #define ipi 0.11
    return valor * ipi;
}

float calcularValorICM(float valor)
{
   #define icm 0.17
    return valor * icm;
}

float calcularLucro(float valor)
{
   #define lucro 0.15
   return valor * lucro;
}

float converterTempCparaF(float temperaturaC)
{
    return (9 * temperaturaC + 160) / 5;
}

float calcularConsumoGaloes(float tempoGasto, float velocidade)
{
    //Autonomia declarada
    #define autonomia 5*12
    float distancia = velocidade * tempoGasto;
    float qtd_galoes = distancia / autonomia;

    return qtd_galoes;
}

float calcularDistanciaPontos(float c1, float c2, float c3, float c4)
{
    float distancia = sqrt(pow((c2 - c1),2) + pow(c4-c3,2));
    return distancia;
}


int calcularTurmaAlunos(int quantidade_alunos)
{
    //#define tamanho_turma 4
    //int tmt = tamanho_turma;

    int grupo_fechado = quantidade_alunos / 4;
    return grupo_fechado;

}

int calcularAlunosAvulsos(int quantidade_alunos, int tamanho_turma)
{
  int alunos_avulsos = 0;
  if(quantidade_alunos % tamanho_turma != 0)
  {
   bool verificador = 1;
   int qtd_alunos = quantidade_alunos - 1;

    while(verificador)
    {
      if(qtd_alunos % tamanho_turma == 0)
      {
          alunos_avulsos = quantidade_alunos - qtd_alunos;

      }else
      {
         qtd_alunos =  qtd_alunos - 1;
      }
    }
   }

   return alunos_avulsos;
}
