#include <iostream>

using namespace std;

int main()
{
	int cont;
	
	cont = 0;
	while(cont < 1000)
	{
		if(cont == 500)
			break; // O comando break é utilizado para sair de um laço de repetição ou de um switch case. No exemplo abaixo, o laço while irá imprimir os números de 0 a 499, e quando cont chegar a 500, o comando break será executado, saindo do laço e não imprimindo os números seguintes.
		cout << cont << endl;
		cont++;
	}

	return 0;
}