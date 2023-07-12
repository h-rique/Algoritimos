/******************************************************************************
 
exercicio 7
Escreva um algoritmo estruturado que gere os numeros inteiros entre 1000 a 1999 e
escreva somente os numeros cuja divisao por 11 resulte em resto 5.


*******************************************************************************/

#include <stdio.h>


int main()
{
    int cont, aux;
    float soma;
   
   
    cont = 1000;
    
    while(cont <= 1999)
    {
        aux = cont%11;
        if(aux == 5) 
        {
            printf("%d\n", cont);
            cont++;
        }
        else cont++;
    }
    
    return 0;
}




