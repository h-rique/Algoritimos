/******************************************************************************

Exercício 4
Escreva um algoritmo para determinar se um n´umero inteiro dado é par ou ímpar.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int numero, resto;
    
    printf("Digite um número:");
    scanf("%d", &numero);
    
    resto = numero % 2;
    
    if(resto == 0) printf("%d é par", numero);
    else printf("%d é ímpar", numero);
}






