#include <iostream>

using namespace std;

int main()
{   // Definimos um enum chamado armas com tres valores: pistola, escopeta e rifle, cada um com um valor inteiro específico.
	enum armas {pistola = 12, escopeta = 8, rifle = 20};

	armas armasel;// Declaramos uma variável do tipo armas chamada armasel.

	armasel = escopeta;

	cout << armasel;

    return 0;
}