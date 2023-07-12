/******************************************************************************

Exercício 2
Escreva um algoritmo que receba o nome, sobrenome e a idade de uma pessoa e apresenta 
como dado de saída um mensagem informando se o indivíduo é maior ou menor de idade.
Faça um teste de mesa para verificar o funcionamento do algoritmo.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float idade;
    char nome[20], sobrenome[20];
    
    printf("Nome:");
    scanf("%s", nome);
    printf("Sobrnome:");
    scanf("%s", sobrenome);
    printf("Idade (quantos anos completos):");
    scanf("%f", &idade);
    
    if(idade < 18) printf("Sr(a) %s %s é menor de idade.", nome, sobrenome);
    else printf("Sr(a) %s %s é maior de idade.", nome, sobrenome);
    return 0;
}




