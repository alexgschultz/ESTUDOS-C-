#include <iostream>

using namespace std;

int main()
{
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (numeros[i] > numeros[j]) 
            {
				int temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;
            }
        }
    }

    cout << "\nVetor ordenado:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}