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
    int tempo,velocidade;
    cin >> tempo;
    cin >> velocidade;

    int distancia = tempo * velocidade;
    double litros = (double)distancia / 12.0;

    cout.precision(3);
    cout << fixed;
    cout << litros << endl;
    return 0;
}
