/******************************************************************************

exercicio 6
Faca um programa que some os numeros impares contidos em um intervalo definido
pelo usuario. O usuario define o valor inicial e o valor final deste intervalo, 
e o programa deve somar todos os numeros ımpares contidos neste intervalo. 
Caso o usuario digite um intervalo invalido(comecando por um valor maior que o valor final), 
deve ser escrita uma mensagem de erro na tela,“Intervalo de valores invalido” e 
o programa e terminado.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int vi, vf, aux, cont, soma;
    
    printf("Informe o valor inicial do intervalo: ");
    scanf("%d", &vi);
    printf("Informe o valor final do intervalo: ");
    scanf("%d", &vf);
    
    if(vi >= vf) printf("Intervalo de valores invalido.");
    else 
    {
        soma = 0;
        cont = vi;
    
        while(cont <= vf)
        {
            aux = cont%2;
            if (aux > 0)
            {
                soma = soma + cont;
                cont ++;
            }
            else cont ++;
        }
        printf("A soma eh %d.", soma);
    }
    return 0;
}



