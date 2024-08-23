/***************************************************************
    Instituto Federal do Rio Grande do Sul - Câmpus Ibirubá
    Curso Técnico Integrado em Informática
    Olimpíada de Programação 2023

    Alunos:
    - Joaquim R. Debiasi
    - Pedro Molinaro
***************************************************************/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    if (a == b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }
    if (a > b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b);
    }
    return 0;
}
