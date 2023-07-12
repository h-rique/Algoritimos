/******************************************************************************

Exercício 11
Dados os tamanhos dos dois catetos de um triângulo, calcule o tamanho da hipotenusa.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;
    printf("Cateto 1 do triângulo :");
    scanf("%f", &cateto1);
    printf("Cateto 2 do triângulo :");
    scanf("%f", &cateto2);
    
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
    printf("A hipotenusa do seu tiângulo é: %3.2f", hipotenusa);
    return 0;
}



