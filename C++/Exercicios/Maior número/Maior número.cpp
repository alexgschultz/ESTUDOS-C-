#include <iostream>

using namespace std;

int main()
{
    int numeros[5];

    // Preenche o vetor
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Assume que o primeiro é o maior
    int maior = numeros[0];

    // Procura um número maior
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    cout << "Maior numero: " << maior << endl;

    return 0;
}