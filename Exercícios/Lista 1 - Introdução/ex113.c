/******************************************************************************

Exercício 13 
Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão
sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    char nome[30];
    float salario_fixo, total_vendas, salario_final;
    
    printf("Nome do vendedor:");
    scanf("%s", nome);
    printf("Salário fixo:");
    scanf("%f", &salario_fixo);
    printf("Vendas totais em dinheiro:");
    scanf("%f", &total_vendas);
    
    salario_final = salario_fixo + total_vendas*0.15;
    
    printf("Vendedor %s recebe um salario fixo de R$%3.2f \n", nome, salario_fixo);
    printf("Com a comissão das vendas o salario final é de R$%3.2f", salario_final);
    return 0;
}



