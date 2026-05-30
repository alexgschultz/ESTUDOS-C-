#include <iostream>

using namespace std;

int main()
{
    int number;
    int a = 0;
    int b = 1;
    int proximo;

    cout << "Quantos numeros deseja mostrar? ";
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << a << " ";
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}