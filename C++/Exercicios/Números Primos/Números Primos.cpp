#include <iostream>

using namespace std;

int main()
{
    int num;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> num;

    if (num <= 1) {
        primo = false;
    }

    for (int i = 2; i < num; i++) {

        if (num % i == 0) {
            primo = false;
            break;
        }
    }

    if (primo) {
        cout << "Esse numero e primo." << endl;
    }
    else {
        cout << "Esse numero nao e primo." << endl;
    }

    return 0;
}