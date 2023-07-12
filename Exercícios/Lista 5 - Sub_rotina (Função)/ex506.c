/******************************************************************************

exercicio 6
Crie uma sub-rotina em Fortran que receba um número inteiro menor que 1.000 e
retorne a posição correspondente. Exemplos: primeiro, decimo quarto, 
sentesimo nonagesimo oitavo, etc.
*******************************************************************************/
#include <stdio.h>

int numero(int num)
{
    int resultado;
    
    resultado = num;
    if(num/1000 == 1)printf("Milesimo.");
    if (num/100 == 1)printf("Centesimo ");
    if (num/100 == 2)printf("Ducentesimo ");
    if (num/100 == 3)printf("Tricentesimo ");
    if (num/100 == 4)printf("Quadrigentesimo ");
    if (num/100 == 5)printf("Quingentesimo ");
    if (num/100 == 6)printf("Sexcentesimo ");
    if (num/100 == 7)printf("Septigentesimo ");
    if (num/100 == 8)printf("Octigentesimo ");
    if (num/100 == 9)printf("Nongentesimo ");
    
    if (num%100 >= 10 && num%100 < 20)printf("Decimo ");
    if (num%100 >= 20 && num%100 < 30)printf("Vigesimo ");
    if (num%100 >= 30 && num%100 < 40)printf("Trigesimo ");
    if (num%100 >= 40 && num%100 < 50)printf("Quadragesimo ");
    if (num%100 >= 50 && num%100 < 60)printf("Quinquagesimo ");
    if (num%100 >= 60 && num%100 < 70)printf("Sexagesimo ");
    if (num%100 >= 70 && num%100 < 80)printf("Septuagesimo ");
    if (num%100 >= 80 && num%100 < 90)printf("Octogesimo ");
    if (num%100 >= 90 && num%100 < 100)printf("Nonagesimo ");
    
    if(num%10 == 1)printf("Primeiro");
    if(num%10 == 2)printf("Segundo");
    if(num%10 == 3)printf("Terceiro");
    if(num%10 == 4)printf("Quarto");
    if(num%10 == 5)printf("Quinto");
    if(num%10 == 6)printf("Sexto");
    if(num%10 == 7)printf("Setimo");
    if(num%10 == 8)printf("Oitavo");
    if(num%10 == 9)printf("Nono");
    
    return num;
}

int main ()
{
    int num, resultado;

    printf ("Informe um numero: ");
    scanf ("%d", &num);
  
    resultado = numero(num);
    
 
 
  return 0;
}





