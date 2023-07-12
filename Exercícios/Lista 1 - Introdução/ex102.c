/******************************************************************************

Exercício 2 
Construa um algoritmo que receba o número de matrícula, nome e salário de um
funcionário, calcula o valor do reajuste (de 15% sobre o salário atual) e o novo 
salário, e apresenta o número de matrícula, nome e o novo salário do funcionário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[30];
    float num_matricula, salario, salario_final;
    
    printf("Digite seu numero de matricula:");
    scanf("%f", &num_matricula);
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("digite seu salário atual:");
    scanf("%f", &salario);

    salario_final = salario + (salario*0.15);
    
    printf("%s, número de matrícula %.0f, seu salário com reajuste é de R$%3.2f", nome, num_matricula, salario_final);
    return 0;
}

