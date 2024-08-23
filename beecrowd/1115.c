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

    int X, Y;

    do
    {
        scanf("%d", &X);
        scanf("%d", &Y);

        if (X > 0 && Y > 0)
        {

            printf("primeiro\n");
        }
        else if (X < 0 && Y < 0)
        {

            printf("terceiro\n");
        }
        else if (X < 0 && Y > 0)
        {

            printf("segundo\n");
        }
        else if (X > 0 && Y < 0)
        {

            printf("quarto\n");
        }
    } while (X != 0 && Y != 0);
}
