/******************************************************************************

Exercício 8 
O preço de um automóvel é calculado pela soma do preço de fabrica com o preço
dos impostos (45% do preço de fabrica) e a percentagem do revendedor (28% do preço). 
Faça um programa em C que leia o nome do automóvel e o preço de fabrica e mostre na tela o nome do
automóvel e o preço final.
Obs: Imposto = Preço de Fábrica ·(0, 45 + 0, 28)
Preço final = Preço de fábrica + imposto
*******************************************************************************/
#include <stdio.h>


int main()
{
    char nome[10];
    float preco_fabrica, preco_final, imposto;
    printf("Nome do automóvel:");
    scanf("%s", nome);
    printf("Preço de fábrica:");
    scanf("%f", &preco_fabrica);
    
    imposto = preco_fabrica*(0.45 + 0.28);
    preco_final = preco_fabrica + imposto;
    printf("O automóvel %s tem valor final de R$%3.2f", nome, preco_final);

    return 0;
}


