#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    string jogador;
    int vidaJogador = 100;
    int vidaMonstro = 100;
    int ataque;
	int mana = 60;

    cout << "Digite o nome do heroi: ";
    cin >> jogador;

    cout << "\nUm monstro apareceu!" << endl;

    while (vidaJogador > 0 && vidaMonstro > 0) {

        cout << "\nVida do heroi " << jogador << ": " << vidaJogador << endl;
        cout << "Mana restante: " << mana << endl;
        cout << "Vida do monstro: " << vidaMonstro << endl;

        cout << "\nEscolha o ataque:" << endl;
        cout << "1 - Ataque fraco (10 dano)" << endl;
        cout << "2 - Ataque forte (20 dano)" << endl;
        cout << "3 - Magia (30 dano)" << endl;
        cout << "Opcao: ";
        cin >> ataque;

        if (ataque == 1) {
            vidaMonstro -= 10;
            cout << "Voce causou 10 de dano!" << endl;
        }
        else if (ataque == 2) {
            vidaMonstro -= 20;
            cout << "Voce causou 20 de dano!" << endl;
        }
        else if (ataque == 3) {

            if (mana >= 30) {
                mana -= 30;
                vidaMonstro -= 30;

                cout << "Voce usou magia! Calsou 30 de dano." << endl;
            }
            else {
                cout << "Mana insuficiente!" << endl;
            }
        }
        else {
            cout << "Ataque invalido!" << endl;
            continue;
        }

        if (vidaMonstro > 0) {
			int dano = rand() % 20 + 1; // Dano aleatório entre 1 e 20
            vidaJogador -= dano;
            cout << "O monstro causou " << dano << " de dano!" << endl;
        }
    }

    if (vidaMonstro <= 0) {
        vidaMonstro = 0;
    }

    if (vidaJogador <= 0) {
        vidaJogador = 0;
    }

    if (vidaJogador > 0) {
        cout << "\n   Voce venceu!" << endl;
    }                               
    else {                          
        cout << "\n   Voce perdeu!" << endl;
    }
	cout << "\nVida final do heroi " << jogador << ": " << vidaJogador << endl;
	cout << "Vida final do monstro: " << vidaMonstro << endl;
	cout << "\nFim De Jogo!" << endl;

    return 0;
}