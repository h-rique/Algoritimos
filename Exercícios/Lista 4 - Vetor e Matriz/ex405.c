/******************************************************************************

exercicio 5
Uma matriz quadrada A, cujos elementos sao designados por Aij , e dita simetrica
se Aij = Aji. Construir um algoritmo para ler uma matriz N * N do usuario (onde o valor de N
tambem e fornecido pelo usuario) e determinar se ela e ou nao simetrica.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, N, k, simetrica;
    
    printf("Informe o valor de N para matriz(NxN): ");
    scanf("%d", &N);
    
    int matriz[N][N];
    
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("Informe o valor A(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    simetrica=0;
    k=1;
    for(i=0; i<N; i++)
    {
        for(j=k; j<N; j++)
        {
            if(matriz[i][j] != matriz[j][i])
            {
                printf("A matriz eh assimetrica");
                return 0;
            }
        }
        k++;
    }
    
    printf("A matriz eh simetrica.");
    return 0;
}




