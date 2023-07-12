/******************************************************************************

Exercício 4 
Faça um algoritmo que receba como dados de entrada os coeficientes A, B e C de 
um equação do segundo grau e calcula as raízes reais dessa equação utilizando a 
fórmula de Baskara. Como dados de saída devem ser apresentadas as raízes obtidas.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, Delta, Raiz1, Raiz2;
    printf("Digite o coeficiente A da sua equação:");
    scanf("%f", &A);
    printf("Digite o coeficiente B da sua equação:");
    scanf("%f", &B);
    printf("Digite o coeficiente C da sua equação:");
    scanf("%f", &C);
    
    Delta = B*B -4*A*C;
    Raiz1 = (-B + sqrt(Delta))/(2*A);
    Raiz2 = (-B - sqrt(Delta))/(2*A);
    
    printf("Para os valores de A, B e C referidos temos %3.2f e %3.2f como raizes", Raiz1, Raiz2);
    
    return 0;
    
}
