#include <iostream>

using namespace std;

int n1, n2; // Variáveis Globais

int main()
{
	// Operadores Matemáticos: +, -, *, /, %, ()

	int n3, n4; // Variáveis Locais
	int res, res2;

	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;

	// res = n1 + n2 + n3 + n4;  Resultado: 21
	// res = (n1 + n2 + n3 + n4) - 11;  Resultado: 10
	// res = n1 + n2 * n4;  Resultado: 17

	// Para realizar a soma primeiro, é necessário usar os parênteses
	res = (n1 + n2) * n4;  // Resultado: 28
	res2 = n1 % n2;  // Resto da divisão de n1 por n2. Resultado: 2

	cout << "A soma de todas as variaveis: " << res << endl;
	cout << "O resto das variaveis: " << res2 << endl;

	return 0;
}