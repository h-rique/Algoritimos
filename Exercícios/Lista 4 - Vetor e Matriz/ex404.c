/******************************************************************************

exercicio 4
Escreva um algoritmo para multiplicar uma matriz A(MxN) por um vetor X(N) e atribuir
o resultado ao vetor BM.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linha1, coluna1, aux;
    printf("Informe quantas linhas tem sua matriz: ");
    scanf("%d", &linha1);
    printf("Informe quantas colunas tem sua matriz: ");
    scanf("%d", &coluna1);
    
    int matrizA[linha1][coluna1], x[coluna1], b[linha1];
    
    for(i=0; i<linha1; i++)
    {
        for(j=0; j<coluna1; j++)
        {
            printf("Informe o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i=0; i<coluna1; i++)
    {
        printf("Informe o %dº termo do vetor X: ", i+1);
        scanf("%d", &x[i]);
    }
    printf("O vetor resultante B: \n");    
    for(i=0; i<linha1; i++)
    {
        aux=0;
        for(j=0; j<coluna1; j++)
        {
            aux = aux + matrizA[i][j]*x[j];
        }
        b[i] = aux;
        printf("%d ", b[i]);
        printf("\n");
    }
    return 0;
}


