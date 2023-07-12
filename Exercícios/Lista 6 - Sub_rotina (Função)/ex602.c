/******************************************************************************
lista 6
exercicio 2
Escreva um subalgoritmo para determinar se um número inteiro dado é ou não par.
*******************************************************************************/
#include <stdio.h>
int resultado(int x)
{
    if(x%2 == 0) printf("O numero %d eh par.", x);
    else printf("O numero %d eh impar.", x);
    return(x);
}

int main()
{
    int numero;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    
    resultado(numero);
    return 0;
}



