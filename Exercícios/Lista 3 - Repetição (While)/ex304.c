/******************************************************************************

exercicio 4
Escrever um programa que leia uma sequência de 5 nomes de alunos e suas 
respectivas idades. Ao final o programa deve imprimir o nome e a idade do mais 
velho dentre todos os alunos.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int maior, idade, cont;
    char nome[10], velho[10];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    maior = idade; 
    strcpy(velho, nome);
    cont = 1;
    while(cont < 5)
    {
        printf("Digite seu nome: ");
        scanf("%s", nome);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if(idade > maior)
        {
            maior = idade;
            strcpy(velho, nome);
        }
        cont ++;
    }
    
    printf("%s de %d anos eh o mais velho.", velho, maior);
    
    return 0;
}

