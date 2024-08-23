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

    double raio, area;

    scanf("%lf", &raio);

    area = ((raio * raio) * 3.14159);

    printf("A=%.4lf\n", area);
}
