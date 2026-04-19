#include <iostream>

using namespace std;

int main()
{
	int cont = 20;

	// O bloco de código dentro do do-while será executado pelo menos uma vez, mesmo que a condição seja falsa.
	do {
		cout << "Contador: " << cont << endl;
		cont++;
	} while (cont < 20);

	return 0;
}