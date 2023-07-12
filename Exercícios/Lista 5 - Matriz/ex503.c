/******************************************************************************

exercicio 3
Escreva um algoritmo para realizar a leitura de uma matriz de M linhas e N colunas.
Obs.: o tamanho da matriz tambem deve ser fornecido como parametro ao subalgoritmo.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, linha, coluna;
    printf("Informe quantas linhas tem sua matriz: ");
    scanf("%d", &linha);
    printf("Informe quantas colunas tem sua matriz: ");
    scanf("%d", &coluna);
    int vetor[linha][coluna];
    
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("Informe o termo A(%d,%d): ", i+1, j+1);
            scanf("%d", &vetor[i][j]);
        }
    }
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d ",vetor[i][j]);
        }
        printf("\n");
    }
    return 0;
}


