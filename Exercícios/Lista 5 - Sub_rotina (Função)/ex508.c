/******************************************************************************

exercicio 8
Crie um algoritmo que receba as coordenadas de dois pontos no plano (x 1 , y 1 ) e (x 2 , y 2 )
e utilize uma sub-rotina para calcular a inclinação a e a intersecção b da reta y = ax + b que passa
pelos pontos informados. O resultado deve ser apresentado pelo programa principal.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float a, b;
int inclinacao(int x1, int y1, int x2, int y2)
{
    a = 1.0*(y2 - y1)/(x2 - x1);
    printf("A inclinacao da reta que passa pelos pontos(%d, %d) e (%d, %d) eh igual a %.2f.\n", x1, y1, x2, y2, a);
    return(a);
}

int interseccao(int x1, int y1, int x2, int y2)
{
    b = y1 - a*x1;
    printf("A interseccao da reta que passa pelos pontos(%d, %d) e (%d, %d) eh igual a %.2f.\n", x1, y1, x2, y2, b);
    return(b);
}

int main()
{
    int x1, y1, x2, y2;
    
    printf("Informe o ponto x1: ");
    scanf("%d", &x1);
    printf("Informe o ponto y1: ");
    scanf("%d", &y1);
    printf("Informe o ponto x2: ");
    scanf("%d", &x2);
    printf("Informe o ponto y2: ");
    scanf("%d", &y2);
    
    inclinacao(x1, y1, x2, y2);
    interseccao(x1, y1, x2, y2);

    return 0;
}




