/***************************************************************
    Instituto Federal do Rio Grande do Sul - Câmpus Ibirubá
    Curso de Ciência da Computação
    Olimpíada de Programação 2023

    Alunos:
    - Eduardo Hüther
    - Athirson Lamonato
    - Gustavo Gewehr
***************************************************************/

#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    int tempo;
    cin >> tempo;

    int horas = tempo / 3600;
    int rhoras = tempo % 3600;
    int minutos = rhoras / 60;
    int rminutos = rhoras % 60;
    int segundos = rminutos;

    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}