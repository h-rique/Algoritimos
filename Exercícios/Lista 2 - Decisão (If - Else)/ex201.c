/******************************************************************************

Exercício 1 
Faça um código que receba o nome e o salário atual de um funcionário e calcule
o novo salário, sendo que os funcionários que ganham até 800 reais deverão ter 20% de reajuste, os
que ganham até 1500 reais deverão ter 12% de reajuste e os demais deverão ter 8% de reajuste.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float salario_atual, reajuste;
    char nome[20];
    
    printf("Nome do funcionário: ");
    scanf("%s", nome);
    printf("Salário atual R$ ");
    scanf("%f", &salario_atual);
    
    if(salario_atual <= 800)
    {
        reajuste = salario_atual + salario_atual*0.20;
    }
    else if(salario_atual <= 1500)
    {
        reajuste = salario_atual + salario_atual*0.12;
    }
    else 
    {
        reajuste = salario_atual + salario_atual*0.08;
    }
    
    printf("%s Seu novo salário é R$%3.2f.",nome, reajuste);
    
    return 0;
}






