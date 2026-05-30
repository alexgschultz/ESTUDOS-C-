#include <iostream>

using namespace std;

int main()
{
	double a, b;
	int opcao;

	cout << "Digite o primeiro numero: ";
	cin >> a;
	cout << "Digite o segundo numero: ";
	cin >> b;
	cout << "Escolha uma opção:" << endl;
	cout << "1 - Soma" << endl;
	cout << "2 - Subtração" << endl;
	cout << "3 - Multiplicação" << endl;
	cout << "4 - Divisão" << endl;
	cin >> opcao;

	switch (opcao) {
	case 1:
		cout << "Resultado: " << a + b << endl;
		break;
	case 2:
		cout << "Resultado: " << a - b << endl;
		break;
	case 3:
		cout << "Resultado: " << a * b << endl;
		break;
	case 4:
		if (b != 0) {
			cout << "Resultado: " << a / b << endl;
		}
		else {
			cout << "Erro: Divisão por zero!" << endl;
		}
		break;
	default:
		cout << "Opção inválida!" << endl;
	}
	return 0;
}