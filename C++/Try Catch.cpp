#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n10, double n20);

int main()
{   
    //vector<int>num(5);

    //num.at(6) = 10;// at() — verifica limites e lança std::out_of_range se inválido.

    //cout << num[0] << endl;

    /*try {
        num.at(4) = 10;
        cout << num[4] << endl;
    }
    catch(const exception& erro) {
        cout << "ERRO: " << erro.what() << endl;
    }*/
//----------------------------------------------------------------------------------------------------------------------------------------------------
    double n1, n2;

    cin >> n1 >> n2;

    try {
        cout << divide(n1, n2);
    }
    catch (const char* msg) {// catch correto se for usar uma string.
        cout << "ERRO: " << msg << endl;
    }

//      Outro metodo mais moderno e profissional:
    /*
    throw runtime_error("Erro de divisao por Zero.");

    catch (const exception& erro)
    {
    cout << "ERRO: " << erro.what() << endl;
    }

    Porque runtime_error herda de exception.
    */

    return 0;
}

double divide(double n10, double n20) {
    if (n20 == 0)
    {
        throw "Erro de divisao por Zero.";// throw: significa lançar uma exceção. O throw é usado quando uma função decide que não deve continuar sua execução normal e transfere a responsabilidade de tratar o problema para quem chamou a função.
    }
    if (n10 >= 10) {
        throw "n1 Precisa ser menor que 10.";
    }
    return n10 / n20;
}

/*
throw → lança uma exceção.
try → bloco onde o erro pode ocorrer.
catch → captura e trata a exceção.
what() → retorna a mensagem da exceção.
A STL usa throw internamente em funções como at().
*/