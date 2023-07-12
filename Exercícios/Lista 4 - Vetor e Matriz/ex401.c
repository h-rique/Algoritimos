/******************************************************************************

exercicio 1
Escreva um algoritmo para calcular o determinante de uma matriz de ordem 2
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, vetor[2][2], determinante;
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Informe o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &vetor[i][j]);
        }
    }
    
    determinante = vetor[0][0]*vetor[1][1] - vetor[0][1]*vetor[1][0];
    printf("O determinante dessa matriz 2x2 eh eh %d.", determinante);
   
    return 0;
}


