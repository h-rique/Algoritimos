/******************************************************************************

Exercício 7
Receber 3 valores numericos em 3 variaveis, A, B e C, e trocar os valores entre as
variaveis de forma que, ao final do algoritmo, a variavel A possua o menor valor e
a variavel C o maior.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, aux;
    
    printf("Digite um valor(A): ");
    scanf("%f", &A);
    printf("Digite um valor(B): ");
    scanf("%f", &B);
    printf("Digite um valor(c): ");
    scanf("%f", &C);
    
    if (A > B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    
    if (B > C)
    {
        aux = B;
        B = C;
        C = aux;
    }
    
    if (A > B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    
    printf("A = %1.0f, B = %1.0f e C = %1.0f.", A, B, C);
   return 0;
}










