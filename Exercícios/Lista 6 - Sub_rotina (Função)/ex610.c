/******************************************************************************

exercicio 10
Crie um algoritmo que receba, no programa principal, os coeficientes a, b e c de uma
equação do segundo grau e utiliza uma sub-rotina para calcular as raizes x 1 e x 2 desta equação. O
resultado deve ser apresentado pelo programa principal.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float x1, x2;
int raiz1(int a, int b, int c)
{
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/2*a;
    printf("Da equacao %dx² + %dx + %d, a raiz 1 eh %.2f.", a, b, c, x1);
    return(x1);
}

int raiz2(int a, int b, int c)
{
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/2*a;
    printf("\nDa equacao %dx² + %dx + %d, a raiz 1 eh %.2f.", a, b, c, x2);
    return(x2);
}

int main()
{
    int a, b, c;
    
    printf("Informe o coeficiente A da sua equaçao do segundo grau: ");
    scanf("%d", &a);
    printf("Informe o coeficiente B da sua equaçao do segundo grau: ");
    scanf("%d", &b);
    printf("Informe o coeficiente C da sua equaçao do segundo grau: ");
    scanf("%d", &c);
    
    raiz1(a, b, c);
    raiz2(a, b, c);
    
    return 0;
}




