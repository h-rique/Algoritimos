/******************************************************************************

Exercício 15 
Uma loja de utilidades está vendendo seus produtos em 5 (cinco) prestações sem juros.
Faça um algoritmo que receba o valor de uma compra e mostre o valor das prestações.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float valor, prestacao;
    
    printf("Valor do produto:");
    scanf("%f", &valor);
    
    prestacao = valor/5;
    
    printf("Este produto pode ser parcelado em 5 prestações de R$%3.2f", prestacao);
    return 0;
}



