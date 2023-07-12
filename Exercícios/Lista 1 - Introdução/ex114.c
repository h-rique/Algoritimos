/******************************************************************************

Exercício 14
Crie um algoritmo que leia dois valores para as variáveis A e B, e efetua a troca dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir
o valor da variável A. Apresentar os valores trocados.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, aux;
    
    printf("Digite o valor de A:");
    scanf("%f", &A);
    printf("Digite o valor de B:");
    scanf("%f", &B);
    
    aux = A;
    A = B;
    B = aux;
    
    
    
    printf("Os novos valores de A e B respectivamente são %3.2f e %3.2f", A, B);
    return 0;
}





