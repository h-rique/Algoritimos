/******************************************************************************

exercicio 5
Faça um algoritmo para ler um número natural N e calcular o maior número primo
menor do que o número N . Utilize uma sub-rotina para verificar se um número 
qualquer é ou não primo.

*******************************************************************************/
#include <stdio.h>

int i, j, aux, primo, maior;
int funcaoPrimo(int x){
    primo = 0;
    for(i=1; i<=x; i++)
    {
        aux = x%i;
        if(aux == 0)primo++;
    }
    if(primo <= 2)printf("O numero %d eh primo", x);
    if(primo > 2) printf("O numero %d nao eh primo", x);
    return(x);
}

int maiorPrimo(int x){
    maior = 2;
    for(j=2; j<x; j++)
    {  
        primo = 0;
        for(i=1; i<=j; i++)
        {
            aux = j%i;
            if(aux == 0)primo++;
        }
        if(primo<=2)maior = j;
    }
    printf("\nO maior primo antes de %d eh %d.", x, maior);
    
    return(x);
}

int main()
{
    int numero, i, primo, aux;
    
    printf("Informe um numero natural: ");
    scanf("%d", &numero);
    
    funcaoPrimo(numero);
    maiorPrimo(numero);

    return 0;
}


