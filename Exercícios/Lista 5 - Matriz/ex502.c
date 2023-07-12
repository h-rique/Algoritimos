/******************************************************************************

exercicio 2
Gerar a matriz transposta de uma matriz 5x5 dada pelo usuario (a transposta e obtida
permutando-se as linhas e as colunas de uma matriz).
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, vetor[5][5], aux[5][5];
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Informe o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &vetor[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            aux[i][j] = vetor[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            vetor[j][i] = aux[i][j];    
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ",vetor[i][j]);
        }
        printf("\n");
    }
    return 0;
}


