#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;

	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;

	cout << "Digite a palavra secreta: ";
	cin >> palavra;
	system("cls");// Limpa a tela para que o jogador não veja a palavra secreta digitada

	// Calcula o tamanho da palavra
	while (palavra[i] != '\0') {
		i++;
		tam++;
	}
	
	// Inicializa a palavra secreta com sublinhados(____)
	for (i = 0; i < 30; i++) {
		secreta[i] = '_';
	}
	
	// Loop principal do jogo
	while ((chances > 0) && (acertos < tam)) { // Enquanto o jogador tiver chances e não tiver acertado a palavra
		cout << "Chances restantes: " << chances << endl;
		cout << "Palavra secreta: ";
		for (i = 0; i < tam; i++) { // Exibe a palavra secreta com letras acertadas e sublinhados(___) para as letras não acertadas
			cout << secreta[i];
		}
		cout << "\nDigite uma letra: ";
		cin >> letra[0];
		for (i = 0; i < tam; i++) { // Verifica se a letra digitada está presente na palavra secreta
			if (palavra[i] == letra[0]) { // Se a letra estiver presente, atualiza a palavra secreta
				acerto = true; // Marca que o jogador acertou uma letra
				secreta[i] = palavra[i]; // Atualiza a palavra secreta com a letra correta
				acertos++; // Incrementa o número de acertos do jogador
			}
		}
		// Se a letra digitada não estiver presente na palavra secreta, o jogador perde uma chance
		if (!acerto) {
			chances--;
		}
		// Reseta a variável de acerto para a próxima rodada
		acerto = false;
		system("cls");
	}
	// Verifica se o jogador acertou a palavra secreta ou perdeu todas as chances
		if (acertos == tam) {
			cout << "Parabéns! Você acertou a palavra secreta: " << palavra << endl;
		} else {
			cout << "Você perdeu! A palavra secreta era: " << palavra << endl;
			cout << "Fim de jogo!" << endl;
		}
		// Pausa o programa para que o jogador possa ver o resultado antes de fechar a janela
		system("pause");

    return 0;
}
