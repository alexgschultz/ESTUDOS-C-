#include <iostream>

using namespace std;

int main()
{   
	int vetor[5]; // Declarando um vetor de inteiros com tamanho fixo
	// int vetor[5] = {10, 20, 30, 40, 50};  Declarando e inicializando um vetor de inteiros
	int i; // Variável de controle para loops

	// Atribuindo valores aos elementos do vetor
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	//vetor[5] = 60; -> ERRO: Acesso fora dos limites do vetor (comportamento indefinido)

	cout << vetor[3] << "\n\n";

	// outra forma de declarar e inicializar um vetor
	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << endl;
	}
	cout << "\n";

	// outra forma de declarar e inicializar um vetor
	for (i = 0; i < sizeof(vetor) / 4; i++) { // sizeof(vetor) retorna o tamanho total do vetor em bytes, e cada elemento é um inteiro (4 bytes)
		cout << vetor[i] << endl;
	}

    return 0;
}