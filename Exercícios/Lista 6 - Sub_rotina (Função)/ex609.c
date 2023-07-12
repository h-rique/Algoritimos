/******************************************************************************

exercicio 9
Crie um algoritmo que receba as coordenadas de dois pontos no plano (x 1 , y 1 ) e (x 2 , y 2 )
e utilize uma sub-rotina para calcular a distância entre os pontos informados. O resultado deve ser
apresentado pelo programa principal.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float a;
int distancia(int x1, int y1, int x2, int y2)
{
    a = sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2));
    printf("A distancia entre os pontos(%d, %d) e (%d, %d) eh  %.2f.", x1, y1, x2, y2, a);
    return(a);
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
    
    distancia(x1, y1, x2, y2);
    
    return 0;
}




