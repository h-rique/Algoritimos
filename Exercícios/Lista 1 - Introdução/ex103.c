/******************************************************************************

Exercício 3 
Crie um algoritmo que leia a quilometragem rodada em uma corrida de taxi e calcula o preço total da corrida. 
O preço da corrida de um taxi é composto de um valor inicial fixo (bandeirada) de R$ 3, 80, somado a R$ 2, 30 por km rodado,
ou seja, Valor total = 3, 80 + 2, 30 × quilometragem rodada. Utilize o teste de mesa para verificar suas respostas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float preco_total, quilometragem_rodada;
    printf("Digite a quilometragem rodada na corrida:");
    scanf("%f", &quilometragem_rodada);
  
    preco_total = 3.80 + 2.30*quilometragem_rodada;
    
    printf("Com %3.1f Km rodados\n", quilometragem_rodada);
    printf("O valor da corrida fica em R$%3.2f", preco_total);
  
  return 0;
}
