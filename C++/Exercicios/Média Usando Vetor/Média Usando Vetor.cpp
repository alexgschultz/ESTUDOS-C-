#include <iostream>

using namespace std;

int main()
{
	int numeros[5];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> numeros[i];
		total += numeros[i];
	}
	double media = total / 5.0;

	cout << "\nMedia dos numeros: " << media << endl;
	cout << "Soma de todos os numeros: " << total << endl;

	return 0;
}