/******************************************************************************

Exercício 1:
Escreva um algoritmo que leia o raio (R) de um circunferência, calcula a área (A = π·R2) 
e o comprimento da circunferência (C = 2·π·R), e apresenta tais resultados.
Identifique neste algoritmo quais os dados de entrada, saida e processamento.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float raio, circunferencia, area; 
    printf("Digite o raio:");
    scanf("%f",&raio);
    
    area = 3.14*raio*raio;
    circunferencia = 2*3.14*raio;
    
    printf("Com o raio de valor %f \n", raio);
    printf("A area do circulo é %f \n", area);
    printf("E a circunferência é %f", circunferencia);
    return 0;
}

