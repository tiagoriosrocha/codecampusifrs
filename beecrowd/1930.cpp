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
#include <vector>

using namespace std;

int main () {
    vector<int> tomadas(4);
    cin >> tomadas[0] >> tomadas[1] >> tomadas[2] >> tomadas[3];

    int valor = 0;
    for (int i = 0; i < 4; i++) {
        if (i == 4 - 1) {
            valor += tomadas[i];
        } else {
            valor += tomadas[i] - 1;
        }
    }
    cout << valor << endl;
    return 0;
}