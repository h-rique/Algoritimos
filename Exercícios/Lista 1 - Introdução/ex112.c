/******************************************************************************

Exercício 12 
Crie um programa em C que leia um valor em reais e calcula qual o menor número 
possível de notas de 100, 50, 20, 10, 5 e 1 em que o valor lido pode ser decomposto. 
Escrever o valor lido e a relação de notas necessárias.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int valor, nota100, nota50, nota20, nota10, nota5, nota1, qntd;
    
    printf("Valor em reais:");
    scanf("%d", &qntd);
    
    valor = qntd;
    nota100 = valor/100;
    valor = valor - nota100*100;
    nota50 = valor/50;
    valor = valor - nota50*50;
    nota20 = valor/20;
    valor = valor - nota20*20;
    nota10 = valor/10;
    valor = valor - nota10*10;
    nota5 = valor/5;
    valor = valor - nota5*5;
    nota1 = valor/1;
    
    printf("O menor numero de notas para sacar o valor de R$%d,00 é: \n", qntd);
    printf("%d notas de 100.\n", nota100);
    printf("%d notas de 50.\n", nota50);
    printf("%d notas de 20.\n", nota20);
    printf("%d notas de 10.\n", nota10);
    printf("%d notas de 5.\n", nota5);
    printf("%d notas de 1.", nota1);
    
    return 0;
}




