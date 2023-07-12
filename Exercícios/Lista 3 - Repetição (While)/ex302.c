/******************************************************************************

exercicio 2
Faca um fluxograma e um pseudocodigo para calcular o fatorial de um numero inteiro
positivo N.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int num, cont, soma;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    
    soma = num;
    cont = 1;
    
    while(cont < num)
    {
        soma = soma*cont;
        cont ++;
    }
    
    printf("O fatorial de %d eh %d.", num, soma);
    return 0;
}



