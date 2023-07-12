/******************************************************************************

Exercício 5 
Faça um programa para identificar o maior entre três números digitados.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, num3, maior;
    
    printf("Digite o 1° numero:");
    scanf("%f", &num1);
    maior = num1;
    printf("Digite o 2° numero:");
    scanf("%f", &num2);
    if(num2 > maior) maior = num2;
    printf("Digite o 3° numero:");
    scanf("%f", &num3);
    if(num3 > maior) maior = num3;
    
    printf("O maior numero digitado foi %3.2f.", maior);
    
    
    
    return 0;
}






