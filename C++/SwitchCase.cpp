#include <iostream>

using namespace std;

int main()
{	
	int val;

	cout << "Selecione uma cor:" << endl;
	cout << "[1] - Vermelho, [2] - Azul, [3] - Verde" << endl;

	cin >> val;

	switch (val) // expressão a ser avaliada
	{	case 1: // caso a expressão seja igual a const1
		cout << "\nVermelho selecionado." << endl; // código a ser executado se expressão == const1
			break; // o comando break é necessário para evitar que o código continue a ser executado mesmo depois de encontrar um case verdadeiro

		case 2: // caso a expressão seja igual a const2
			cout << "\nAzul selecionado." << endl; // código a ser executado se expressão == const2
			break;

		case 3: // caso a expressão seja igual a const3
			cout << "\nVerde selecionado." << endl; // código a ser executado se expressão == const3
			break;
		// você pode ter quantos cases quiser

		default: // caso a expressão seja diferente de todas as constantes anteriores
			cout << "Numero errado" << endl; // código a ser executado se expressão não for igual a nenhum dos casos
	}

	cout << "\nFim do programa." << endl;

	return 0;
}