/******************************************************************************

exercicio 4
Escreva um subalgoritmo para calcular o valor do produto escalar entre dois vetores de
M componentes cada (a serem informados pelo usuC!rio).
*******************************************************************************/
#include <stdio.h>

int produto(int m, int *x, int *y)
{
    int soma, i;
    
    soma=0;
    for(i=0; i<m; i++)
    {
        soma = soma + x[i]*y[i];
    }
    
    return soma;
}

int main ()
{
  int i, tamanhoVetor, resultado;

  printf ("Informe quantos componentes terao seus vetores: ");
  scanf ("%d", &tamanhoVetor);

  int vetorA[tamanhoVetor], vetorB[tamanhoVetor];

  //coletando os dados dos vetores
  for (i = 0; i < tamanhoVetor; i++)
    {
      printf ("Informe o %dº numero do vetor A: ", i + 1);
      scanf ("%d", &vetorA[i]);
    }

  for (i = 0; i < tamanhoVetor; i++)
    {
      printf ("Informe o %dº numero do vetor B: ", i + 1);
      scanf ("%d", &vetorB[i]);
    }

  resultado = produto(tamanhoVetor, vetorA, vetorB);
  printf("O produto escalar dos vetores A e B eh %d.", resultado);
  return 0;
}



