/******************************************************************************

exercicio 7
Crie uma sub-rotina que receba um vetor e seu tamanho e retorne ao programa principal
o valor e a posição do maior componente deste vetor.
*******************************************************************************/
#include <stdio.h>

int maior(int m, int *x)
{
    int maior, i;
    maior=0;
    for(i=0; i<m; i++)
    {
        if(x[i] > maior)
        {
            maior = x[i];
        }
    }
    
    return maior;
}

int posicaoMaior(int m, int *x)
{
    int maior, i, posicao;
    maior=0;
    for(i=0; i<m; i++)
    {
        if(x[i] > maior)
        {
            maior = x[i];
            posicao = i;
        }
    }
    
    return posicao;
}

int main ()
{
    int tamanhoVetor, resultado1, resultado2, i;

    printf ("Informe o tamaho do vetor: ");
    scanf ("%d", &tamanhoVetor);
    
    int vetor[tamanhoVetor];
  
    for(i=0; i<tamanhoVetor; i++)
    {
        printf("Informe o %dº numero do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    resultado1 = maior(tamanhoVetor, vetor);
    resultado2 = posicaoMaior(tamanhoVetor, vetor);
    printf("O maior valor do vetor eh %d na posicao %d.", resultado1, resultado2);
    
 
 
  return 0;
}




