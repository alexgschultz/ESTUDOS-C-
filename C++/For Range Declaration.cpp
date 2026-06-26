#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int x[10]{ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    vector<int>n{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    string nome{ "Alex" };

    /*
    for (int i = 0; i < sizeof(x)/4; i++) {
        cout << x[i] << endl;
    }
    */
//  Forma mais moderna de For: for-range-declaration
    for (int i : x) {
        cout << i << endl;
    }
    for (int i : n) {
        cout << i << endl;
    }
    for (char c : nome)
    {
        cout << c;
    }

    return 0;
}
// Regra prática para for-range:
//
// Tipos pequenos (int, char, bool, double) -> use por valor.
// Objetos maiores (std::string, struct, class) -> use const auto& para evitar cópias desnecessárias.
// Se precisar modificar os elementos da coleção -> use auto&.