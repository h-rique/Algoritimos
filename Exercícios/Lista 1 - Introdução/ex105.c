/******************************************************************************

Exercício 5 
Crie um algorítimo que receba o primeiro termo de uma progressão aritmética (A1),
o número de termos (N) e a diferença entre dois termos consecutivos (D), calcula 
o último termo (AN) e a soma de todos os termos (SN ), e apresenta os resultados obtidos.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float prim_termo, diferenca, ult_termo, soma_todos;
    int num_termos;
    
    printf("Primeiro termo da sua PA:");
    scanf("%f", &prim_termo);
    printf("Numero de termos de sua PA:");
    scanf("%d", &num_termos);
    printf("Diferença entre dois termos consecutivos da sua PA:");
    scanf("%f", &diferenca);
    
    ult_termo = prim_termo + (num_termos - 1)*diferenca;
    soma_todos = (num_termos*(prim_termo + ult_termo))/2;
    
    printf("O último termo da PA é %3.2f e a soma de todos os termos é %3.2f", ult_termo, soma_todos);
    return 0;
}



