/******************************************************************************

Exercício 6
Receber 3 valores numericos, X, Y e Z, e verificar se esses valores podem corresponder
aos lados de um triangulo. Em caso afirmativo, informar ao usuario se o triangulo e equilatero,
isoscelos ou escaleno.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float X, Y, Z, maior, menor, mediano, aux;
    
    printf("Digite o lado X: ");
    scanf("%f", &X);
    printf("Digite o lado Y: ");
    scanf("%f", &Y);
    printf("Digite o lado Z: ");
    scanf("%f", &Z);
    
     if (X > Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }
    
    if (Y > Z)
    {
        aux = Y;
        Y = Z;
        Z = aux;
    }
    
    if (X > Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }
    
    maior = Z;
    mediano = Y;
    menor = X;
    
    if (maior >= mediano + menor || menor <= 0)
    {
        printf("Nao forma um triangulo.");
    }
    else
    {
        if (maior == menor)
        {
            printf("Triangulo equilatero.");
        }
        else if ((maior == mediano) || (mediano == menor))
        {
            printf("Triangulo isosceles");
        }
        else
        {
            printf("Triangulo escaleno");
        }
        
    }
    
   return 0;
}











