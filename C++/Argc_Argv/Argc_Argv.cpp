#include <iostream>

using namespace std;

int main(int argc, char* argv[]) /* argc é o número de argumentos passados ​​para o programa, e argv é um array de ponteiros de caracteres listando todos os argumentos. O primeiro argumento (argv[0]) é o nome do próprio programa, e os argumentos subsequentes (argv[1], argv[2], etc.) são os argumentos adicionais passados ​​para o programa. */
{	
	if (argc > 1) // Verifica se há mais de um argumento (além do nome do programa).
	{
		if (!strcmp(argv[1], "sol")) {
			cout << "Vou ao clube." << endl; // Se o primeiro argumento for "sol", imprime "Vou ao clube."
		}
		else if (!strcmp(argv[1], "chuva")) {
			cout << "Vou ao cinema." << endl; // Se o primeiro argumento for "chuva", imprime "Vou ao cinema.
		}
		else {
			cout << "Fico em casa." << endl; // Se o primeiro argumento for diferente de "sol" e "chuva", imprime "Fico em casa."
		}
	}

	cout << argv[1] << endl; // Imprime o primeiro argumento passado para o programa (além do nome do programa).
	cout << argv[2] << endl; // Imprime o segundo argumento passado para o programa.
	cout << argc << endl; // Imprime o número de argumentos passados ​​para o programa.

	system("pause");

	return 0;
}