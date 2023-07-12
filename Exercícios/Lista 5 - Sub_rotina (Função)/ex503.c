/******************************************************************************

exercicio 3
Escreva um subalgoritmo para calcular o valor da norma de um vetor V de N compo-
nentes (dadas).
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float norma(int m, int *x)
{
    int i;
    float soma, resultado;

    soma = 0;    
    for(i=0; i<m; i++)
    {
        soma = soma  + pow(x[i], 2);
    }
    
    resultado = sqrt(soma);
    return (resultado);
}

int main()
{
    int tamanhoVetor, i;
    float resultado;
    
    printf("Informe o tamanho do vetor V: ");
    scanf("%d", &tamanhoVetor);
    
    int vetor[tamanhoVetor];
    
    for(i=0; i<tamanhoVetor; i++)
    {
        printf("Informe o %dº valor do vetor V: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    resultado = norma(tamanhoVetor, vetor);
    printf("A norma do vetor eh %.2f.", resultado);
    
    return 0;
}




