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

    int X;
    float Y, km;

    scanf("%d", &X);
    scanf("%f", &Y);

    km = X / Y;

    printf("%.3f km/l\n", km);

    return 0;
}