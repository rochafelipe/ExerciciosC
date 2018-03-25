#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int subtraiOuSoma(int n1, int n2);
int ehNumeroPar(int n1,int n2);
char buscarTipoQuadrado(int ladoA, int ladoB, int ladoC);
float calcularAreaQuadrado(int lado4, int ladoB, int ladoC);
float calcularSalarioLiquido(float salario_bruto, int faltas, int dependentes);
float calcularFaltas(float salario);
float calcularPlanoSaude(float salario);
float calcularIR(float salario);
float calcularAbono(float salario);
float calcularVA(float salario);
float calcularSalarioFamilia(float salario, int dependentes);
void ordenarMenorMaior(int n1, int n2,int n3);

int main()
{
    printf("Hello world!\n");
    return 0;
}


int subtraiOuSoma(int n1, int n2)
{
    int resultado = 0;
    if(n1 > n2)
    {
      resultado = n1 - n2;
    }else
    {
      resultado = n1 + n2;
    }

   return resultado;
}

int ehNumeroPar(int n1,int n2)
{
   int soma = n1 + n2;

   if(soma%2 == 0)
    {
       if(soma > 100)
       {
          soma = soma /2;

       }else
       {
          soma = soma *2;
       }
    }

 return soma;
}

float calcularAreaQuadrado(int ladoA, int ladoB, int ladoC)
{
  float S = (ladoA + ladoB + ladoC) / 2;
  float area = sqrt(S*(S-ladoA)*(S-ladoB)*(S-ladoC));
  char tipoQuadrado = buscarTipoQuadrado(ladoA,ladoB,ladoC);

  switch(tipoQuadrado)
  {
    case 'A': //equilatero
        printf("Quadrato é Equilatero");
    break;
    case 'B': //escaleno
        printf("Quadrato é Isosceles");
    break;
    case 'C': //isoscele
         printf("Quadrato é Escaleno");
    break;
  }

  return area;
}

char buscarTipoQuadrado(int ladoA, int ladoB, int ladoC)
{
  bool escaleno = (ladoA != ladoB) && (ladoA != ladoC);
  //bool isosceles = (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA);
  bool equilatero = (ladoA == ladoB) && (ladoA == ladoC);
  char retorno;
  if(equilatero)
  {
       retorno = 'A';
  }
  else{
    if(escaleno)
    {
       retorno = 'B';

    }else{
        retorno = 'C';
    }
  }

  return retorno;
}

float calcularSalarioLiquido(float salario_bruto, int faltas, int dependentes)
{

  float descontos = calcularFaltas(salario_bruto);
        descontos += calcularPlanoSaude(salario_bruto);

  float acrescimos =  calcularAbono(salario_bruto) ;
        acrescimos =  calcularVA(salario_bruto);
        acrescimos = calcularSalarioFamilia(salario_bruto, dependentes);

  float salario_liquido = (salario_bruto - descontos) + acrescimos;

  return salario_liquido;
}

float calcularFaltas(float salario)
{
    #define FALTA 0.03

    return salario * FALTA;
}

float calcularPlanoSaude(float salario)
{
    #define PLANO_SAUDE 0.06
   return salario * PLANO_SAUDE;
}

float calcularIR(float salario)
{
   #define IR_0 0
   #define IR_3 0.03
   #define IR_5 0.05
   #define IR_7 0.07

   float retorno;

   if(salario <= 900)
   {
      retorno = salario *  IR_0;
   }else
   {
       if(salario >= 901 && salario <= 3000)
       {
         retorno = salario *  IR_3;
       }else
       {
           if(salario >= 3001 && salario <= 4000)
           {
               retorno = salario *  IR_5;
           }else
           {
               retorno = salario *  IR_7;
           }
       }
   }

   return retorno;
}

float calcularAbono(float salario)
{
    #define ABONO 0.25
    #define AC_ABONO 130
    float valor_abono = (salario * ABONO) + AC_ABONO;
    return  valor_abono > 1000 ? 1000 : valor_abono;
}

float calcularVA(float salario)
{
    #define VA 0.12

    return salario * VA;
}

float calcularSalarioFamilia(float salario, int dependentes)
{
    #define SALARIO_FAMILIA 0.25

    return salario * (SALARIO_FAMILIA * dependentes);
}

void ordenarMenorMaior(int n1, int n2,int n3)
{
  int menor = n1;
  int p1 = n1;
  int p2 = n2;
  int p3 = n3;

    if(n2 <= menor)
    {
        menor = n2;
      p1 = n2;
      p2 = n1;
      p3 = n3;

    }

    if(n3 <= menor){
      menor = n3;
      p1 = n3;

      if(n1 <= n2)
      {
        p2 = n1;
        p3 = n2;

      }else{
        p2 = n2;
        p3 = n1;
      }
    }

    printf("Números ordenados: %d | %d | %d",p1,p2,p3);
}
