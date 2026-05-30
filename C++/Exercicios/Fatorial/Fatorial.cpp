#include <iostream>

using namespace std;

int main()
{
	int fatorial = 1;
	int num;

	cout << "Digite um numero: ";
	cin >> num;

    if (num < 0)
    {
        cout << "Erro: Numero negativo!" << endl;
    }
    else
    {
        for (int i = num; i >= 1; i--)
        {
            fatorial *= i;
        }

        cout << "Fatorial de " << num << " e: " << fatorial << endl;
    }

	return 0;
}