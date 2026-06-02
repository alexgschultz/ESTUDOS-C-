#include <iostream>
#include <string.h> // strcmp é uma função da biblioteca string.h que compara duas strings
#include <stdlib.h> // system é uma função da biblioteca stdlib.h que executa um comando no sistema operacional

using namespace std;

int main(int argc, char* argv[]) // argc: cantidad de argumentos, argv: vector de argumentos
{	
	cout << argv[0] << endl; // argv[0] é o nome do programa
	cout << argc << endl; // argc é a quantidade de argumentos, incluindo o nome do programa

	// Verificar se há argumentos adicionais
	if (argc > 1) {
		if (strcmp(argv[1], "Sol") == 0) { // strcmp compara strings, retorna 0 se forem iguais
			cout << "Vou à praia!" << endl;
		}
		else if (strcmp(argv[1], "Chuva") == 0) {// strcmp compara strings, retorna 0 se forem iguais
			cout << "Vou ver um filme!" << endl;
		}
		else {
			cout << "Vou ao Shopping!" << endl;
		}
	}

	system("pause"); // system("pause") é uma função que pausa a execução do programa até que o usuário pressione uma tecla

	return 0;
}