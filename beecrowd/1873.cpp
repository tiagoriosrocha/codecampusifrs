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
#include <string>

using namespace std;

typedef struct {
    string nome;
    vector<string> perde;
} Regras;

int main () {
    vector<Regras> regras(5);
    regras[0].nome = "tesoura";
    regras[0].perde = {"spock", "pedra"};

    regras[1].nome = "papel";
    regras[1].perde = {"lagarto", "tesoura"};

    regras[2].nome = "pedra";
    regras[2].perde = {"spock", "papel"};

    regras[3].nome = "lagarto";
    regras[3].perde = {"pedra", "tesoura"};

    regras[4].nome = "spock";
    regras[4].perde = {"papel", "lagarto"};

    int quantidade;
    cin >> quantidade;

    vector<string> vitorias;

    for (int i = 0; i < quantidade; i++) {
        string rajesh, sheldon;
        cin >> rajesh >> sheldon;

        for (int j = 0; j < 5; j++) {
            if (rajesh == regras[j].nome) {
                if (rajesh == sheldon) {
                    vitorias.push_back("empate");
                } else {
                    bool saiu = false;
                    for (int k = 0; k < 2; k++){
                        if (sheldon == regras[j].perde[k]) {
                            vitorias.push_back("sheldon");
                            saiu = true;
                            break;
                        }
                    }
                    if (!saiu) {
                        vitorias.push_back("rajesh");
                    }
                }

            }
        }
    }

    for (string vit : vitorias) {
        cout << vit << endl;
    }

    return 0;
}