#include <stdio.h>
#include <stdlib.h>

//LT04_EX8: Faça um programa em Linguagem C para ler o salário de 10 funcionarios.
//Mostrar uma lista desses salários em ordem decrescente.


int main()
{

salario10Funcionarios();

 return 0;
}


void salario10Funcionarios()
{

    float lista[10];
    float salario;
    int index;
    float maior_salario;
    float temporario;



    for(index =0; index <10; index++)
    {
         printf("Entre com o salario do funcionario %d \n",index+1);
        scanf("%f",&salario);

        if(index == 0)
        {
           maior_salario = salario;
           lista[index] = salario;
        }else
        {
            if(salario >= maior_salario)
            {
                maior_salario = salario; //atualiza o maior salario para o maior atual
                temporario = lista[index-1]; //Tecnica da bolha, passa o valor anterior para temporario
                lista[index-1] = maior_salario; //organiza o maior para o inicio da lista
                lista[index] = temporario; // organiza menor para frente da lista

            }else
            {
               maior_salario = salario;
               lista[index] = salario;
            }
        }




        }



for(index =0; index < 10; index++)
{

    printf("%f \n",lista[index]);
}

}

