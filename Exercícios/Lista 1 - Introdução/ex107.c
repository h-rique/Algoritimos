/******************************************************************************

Exercício 7 
Faça um programa para ler a base e a altura de um triângulo retângulo. 
Em seguida,escreva a área do mesmo.
area = (Base ∗ Altura)/2

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() 
{
    float base, altura, area;
    printf("Qual a base de seu triângulo retângulo:");
    scanf("%f", &base);
    printf("Qual a altura de seu triângulo retângulo:");
    scanf("%f", &altura);

    area = (base*altura)/2;
    
    printf("A área do seu triangulo é: %3.1f", area);

  return 0;
}
