/******************************************************************************

Exercício 6  
Crie um algorítimo que receba o primeiro termo de uma progressão geométrica (A1),
o número de termos (N) e a razão entre dois termos consecutivos (Q), calcula o último termo (AN )
e a soma de todos os termos (SN ), e apresenta os resultados obtidos.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float prim_termo, razao, ult_termo, soma_todos;
    int num_termos;
    
    printf("Primeiro termo da sua PG:");
    scanf("%f", &prim_termo);
    printf("Numero de termos de sua PG:");
    scanf("%d", &num_termos);
    printf("Razão entre dois termos consecutivos da sua PG:");
    scanf("%f", &razao);
    
    ult_termo = prim_termo* pow(razao,num_termos - 1);
    soma_todos = (prim_termo*(pow(razao,num_termos) - 1))/(razao - 1);
    
    printf("O último termo da PG é %3.2f e a soma de todos os termos é %3.2f", ult_termo, soma_todos);
    return 0;
}



