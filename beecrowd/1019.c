/***************************************************************
    Instituto Federal do Rio Grande do Sul - Câmpus Ibirubá
    Curso Técnico Integrado em Informática
    Olimpíada de Programação 2023

    Alunos:
    - Joaquim R. Debiasi
    - Pedro Molinaro
***************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor;
    int horas, minutos, segundos;

    scanf("%d", &valor);

    horas = valor / 3600;
    valor = valor - (horas * 3600);

    minutos = valor / 60;
    valor = valor - (minutos * 60);

    segundos = valor;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
