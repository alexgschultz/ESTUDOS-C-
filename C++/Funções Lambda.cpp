#include <iostream>
#include <vector>

using namespace std;

int main()
{//   [](){};

    int x1{ 10 };
    int x2{ 5 };
    int x3{ 8 };

    /*
    auto soma = [x1, x2, x3]()->int {// Lambda simples
        return x1 + x2 + x3;
    };
    */
    auto soma = [x1, x2, x3]() {// Captura de variáveis por valor.
        return x1 + x2 + x3;// Lambda para soma
    };
    cout << soma() << endl;


    auto maior = [](int n1, int n2) {// Lambda com parâmetros

        return (n1 > n2) ? n1 : n2;
    };
    cout << maior(10, 5) << endl;


    auto vmaior = [](const vector<int>& n) {// Lambda trabalhando com vector || Lambda para encontrar maior valor
        if (n.empty())
            return 0;

        int m = n[0];
        for (int x : n) {
            if (x > m)
                m = x;
        }
        return m;
    };
    cout << vmaior({ 8, 9, 2, 5, 6, 12 }) << endl;


    auto somar = [](const vector<int>& n) {// Lambda para soma
        int s = 0;
        for (int x : n) {
            s += x;
        }
        return s;
    };
    cout << somar({ 8, 9, 2, 5, 6, 12 }) << endl;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Captura por referência [&]: Permite modificar as variáveis externas.
    int a = 10;
    int b = 5;

    auto conta = [&]()// [&] -> Captura todas as variáveis externas por referência.
    {
            a += b;
    };

    conta();

    cout << a << endl; // 15

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Captura por valor [=]: Faz uma cópia das variáveis.

    int z = 10;
    int y = 5;

    auto conta2 = [=]()// [=] -> Captura todas as variáveis externas por valor (cópia).
        {
            return z + y;
        };

    cout << conta2() << endl; // 15

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Captura de variável específica [x]: Captura apenas a variável desejada.

    int c = 10;
    int d = 20;

    auto mostrar = [c]()// [c] -> Captura somente a variável c por valor.
        {
            cout << c << endl;
        };

    mostrar();

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Captura mista [&, e]: Tudo por referência, exceto e.

    int e = 10;
    int f = 20;

    auto teste = [&, e]()// [&, e] -> Captura e por valor e as demais variáveis por referência.

        {
            cout << e << endl;
            f += 10;
        };

    teste();
//  Também existe o contrário: [=, &h] -> Captura h por referência e as demais variáveis por valor.
    cout << f << endl; // 30

    int h{ 10 };
    int i{ 20 };

    auto exemplo = [=, &h]()
        {
            h += i;
        };

    exemplo();

    cout << h << endl; // 30

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Captura com inicialização (C++14): Cria uma variável própria dentro da lambda.

    auto mostra = [valor = 100]()
        {
            cout << valor << endl;
        };

    mostra();

    // OU

    int x = 10;

    auto conta3 = [valor = x + 5]()// [valor = ...] -> Cria uma variável própria dentro da lambda.
        {
            cout << valor << endl;
        };

    conta3(); // 15

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// mutable: Permite modificar as cópias capturadas por valor.

    int g = 10;

    auto teste2 = [g]() mutable// mutable -> Permite modificar as variáveis capturadas por valor.
        {
            g++;
            cout << g << endl;
        };

    teste2();

    cout << g << endl; // Continua 10

    return 0;
}