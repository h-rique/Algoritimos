/******************************************************************************

Exercício 3
Faça um algoritmo para gerar os N primeiros termos da sequência de Fibonacci:

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ultimo, penultimo, cont, term, an;
    
   
    printf("Determine o numero(N) de temos da sequencia de fibonacci: ");
    scanf("%d", &term);

    penultimo = 1;
    if(term < 2)
    {
        printf("Fibonacci (%d, ...)", penultimo);
    }
    else
    {
        ultimo = 1;
        cont = 2;
        printf("Fibonacci (%d, %d, ", penultimo, ultimo);
        while(cont < term)
        {
            an = penultimo + ultimo;
            printf("%d, ", an);
            penultimo = ultimo;
            ultimo = an;
            cont ++;
        }
        printf("...)");
    }
    return 0;
}


