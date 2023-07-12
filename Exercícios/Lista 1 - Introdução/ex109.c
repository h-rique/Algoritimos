/******************************************************************************

Exercício 9 
Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, media_final;
    printf("Sua nota na P1:");
    scanf("%f", &n1);
    printf("Sua nota na P2:");
    scanf("%f", &n2);
    printf("Sua nota na P3:");
    scanf("%f", &n3);
    
    media_final = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("Sua média final é: %3.2f", media_final);

    return 0;
}

