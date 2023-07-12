/*******************************************************************************

Exercício 1 
Crie um algoritmo que leia o número de notas a serem informadas, as notas e os
respectivos pesos, e calcula a média ponderada das notas lidas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota, peso, soma1, soma2, media;
    int cont, M;
    
    printf("Digite o numero de notas: ");
    scanf("%d", &M);
    
    soma1 = 0;
    soma2 = 0;
    cont = 1;
    
    while(cont <= M)
        {
            printf("Digite a %dª nota: ", cont);
            scanf("%f", &nota);
            printf("Digite o %dº peso: ", cont);
            scanf("%f", &peso);
            soma1 = soma1 + nota*peso;
            soma2 = soma2 + peso;
            cont = cont + 1;
        }
    media = soma1/soma2;
    
    printf("A media eh %3.2f.", media);
    return 0;
}

