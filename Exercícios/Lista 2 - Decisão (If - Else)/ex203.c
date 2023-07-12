/******************************************************************************

Exercício 3
Escreva um algoritmo para determinar se um número inteiro dado é ou não positivo.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    
    printf("Digite um número:");
    scanf("%d", &numero);
    
    if(numero >= 0) printf("%d é positivo", numero);
    else printf("%d é negativo", numero);
    return 0;
}




