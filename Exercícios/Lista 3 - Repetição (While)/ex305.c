/******************************************************************************

exercicio 5
Crie um algoritmo que recebe N valores inteiros e determina o maior e o menor dentre
os valores informados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int maior, menor, num, cont, qntd;
    
    printf("informe quantos numeros voce vai digitar: ");
    scanf("%d", &qntd);
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    cont = 1;
    while(cont < qntd)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        if(num > maior) maior = num;
        if(num < menor) menor = num;
        cont ++;
    }
    printf("\nO maior numero digitado eh %d\n", maior);
    printf("e o menor numero digitado eh %d\n", menor);
    return 0;
}

