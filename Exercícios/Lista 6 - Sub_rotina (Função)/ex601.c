/******************************************************************************

exercicio 1
Escreva um subalgoritmo para determinar se um número inteiro dado é ou não positivo.
*******************************************************************************/
#include <stdio.h>
int resultado(int x)
{
    if(x>=0) printf("O numero %d eh positivo.", x);
    else printf("O numero %d eh negativo.", x);
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



