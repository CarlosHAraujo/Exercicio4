/*

**********************************************************************
* PUCMINAS SÃO GABRIEL                                               *
* DISCIPLINA: LABORATÓRIO DE AED I                                   *
* PROFESSOR:  JÚLIO CONWAY                                           *
* GRUPO: Carlos Araújo e Deyber Pimentel                             *
* PROGRAMA 4                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
    //Declarando e inicializando variáveis:

    int nf=0; //recebe o número funcionário.
    int nht=0; //recebe o número horas trabalhadas pelo funcionário.
    int fm=0; //recebe o número de filhos menores de 14 anos.

    float salario=0; //recebe o valor do salário do funicionário.
    float rsalario=0; //recebe o valor do salário com o reajuste com base no número de filhos menores de 14 anos.
    float vph=0; //recebe o valor por hora trabalhada do funcionario.

    //Apresentando o programa ao usuário:

    printf("Exercicio 4\nPrograma para calcular salario de um funcionario com base nas horas trabalhadas e filhos menores de 14 anos.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    //Solicitando informações do funcionário:

    printf("Informe o numero do funcionario:\n");
    scanf("%d", &nf);
    printf("Informe o numero de horas trabalhadas:\n");
    scanf("%d", &nht);
    printf("Informe quanto o funcionario recebe por hora trabalhada:\n");
    scanf("%f", &vph);
    printf("Informe quantos filhos menores de 14 anos o funcionario tem:\n");
    scanf("%d", &fm);

    //Calulando o salário com base nos dados fornecidos:

    salario=nht*vph; //equacao para descobrir quanto ele vai receber sem o reajuste dos filhos menores

    printf ("O salario do funcionario e:%.2f\n\n",salario);

    rsalario=salario+(salario*(fm*10))/100; //equacao para descobrir quanto ele vai receber com o reajuste dos filhos menores

    printf ("O salario com reajuste de filhos menores que 14 anos e:%.2f\n",rsalario);

    return 0;

}

