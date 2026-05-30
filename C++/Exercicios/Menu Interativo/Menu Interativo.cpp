#include <iostream>

using namespace std;

int main()
{
	int val;
	int a, b;

	do
	{
		cout << "\n===Menu===" << endl;
		cout << "1. Ola" << endl;
		cout << "2. Somar" << endl;
		cout << "3. Sair" << endl;
		cout << "Escolha uma opcao: ";
		cin >> val;

		switch (val)
		{ case 1:
			cout << "Ola! Como voce esta?" << endl;
			break;
		case 2:
			cout << "Digite o primeir numero: ";
			cin >> a;
			cout << "Digite o segundo numero: ";
			cin >> b;
			cout << "A soma dos numeros " << a << " e " << b << " eh: " << a + b << endl;
			break;
		case 3:
			cout << "\nPrograma encerrado." << endl;
			return 0;
		default:
			cout << "Opcao invalida!" << endl;
			break;
		}

	} while (val != 3);// 

	return 0;
}