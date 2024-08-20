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
    vector<int> primeira(5), segunda(5);

    cin >> primeira[0] >> primeira[1] >> primeira[2] >> primeira[3] >> primeira[4];
    cin >> segunda[0] >> segunda[1] >> segunda[2] >> segunda[3] >> segunda[4];

    for (int i = 0; i < 5; i++) {
        if (primeira[i] == segunda[i]) {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "Y" << endl;
    return 0;
}