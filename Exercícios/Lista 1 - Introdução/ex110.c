/******************************************************************************

Exercício 10 
Faça um algoritmo que receba a data de nascimento de uma passoa e a data de hoje.
Como resultado o algoritmo deve fornecer o tempo de vida em dias desta pessoa. 
Considere por simplicidade que todos os meses do ano possuem 30 dias e que o ano possui 360 dias.


*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int d_nasci, m_nasci, a_nasci, d_hoje, m_hoje, a_hoje, dias_vividos;
    printf("Dia do NASCIMENTO (dd):");
    scanf("%d", &d_nasci);
    printf("Mês do NASCIMENTO (mm):");
    scanf("%d", &m_nasci);
    printf("Ano do NASCIMENTO (aaaa):");
    scanf("%d", &a_nasci);
    printf("Agora... \n");
    printf("Dia ATUAL (dd):");
    scanf("%d", &d_hoje);
    printf("Mês ATUAL (mm):");
    scanf("%d", &m_hoje);
    printf("Ano ATUAL (aaaa):");
    scanf("%d", &a_hoje);
    
    dias_vividos = ((360*(a_hoje - a_nasci)) + (30*(m_hoje - m_nasci)) + (d_hoje - d_nasci));
    
    printf("Você tem %3.0d dias vividos! Parabéns sobrevivente!!!", dias_vividos);
    return 0;
}



