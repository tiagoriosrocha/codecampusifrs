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
    vector<int> aposta(6);
    vector<int> sorteados(6);

    cin >> aposta[0] >> aposta[1] >> aposta[2] >> aposta[3] >> aposta[4] >> aposta[5];
    cin >> sorteados[0] >> sorteados[1] >> sorteados[2] >> sorteados[3] >> sorteados[4] >> sorteados[5];

    int acertos = 0;

    for (int i = 0; i < 6; i++) {
        for (const int numero : sorteados) {
            if (aposta[i] == numero) {
                acertos++;
                break;
            }
        }
    }

    switch (acertos) {
    case 3:
        cout << "terno" << endl;
        break;
    case 4:
        cout << "quadra" << endl;
        break;
    case 5:
        cout << "quina" << endl;
        break;
    case 6:
        cout << "sena" << endl;
        break;
    default:
        cout << "azar" << endl;
    }
    return 0;
}