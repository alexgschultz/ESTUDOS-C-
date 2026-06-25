#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct pessoa {
    string nome;
    int idade;
};

class veiculo {
public:
    string nome;
    int tipo;
};

int main()
{   
    int num{ 10 };
    string nome{ "Alex" };
    int vetor[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int>valor{ 1, 2, 3, 4 };
    map<string, string>paises{ {"Brasil", "Brasília"} };
    /* Map fica mais intuitivo como algo assim:
    map<string, string> paises{
    {"Brasil", "Brasília"},
    {"EUA", "Washington"},
    {"Japão", "Tóquio"}
    };
    */

    // struct
    pessoa p1{ "Alex", 31 };
    pessoa p2{ "Goku", 40 };

    // class
    veiculo v1{ "Toyota", 1 };

    cout << num << endl;
    cout << nome << endl;
    cout << vetor[4] << endl;
    for (vector<int>::iterator it = valor.begin(); it != valor.end(); ++it) {
        cout << *it << endl;
    }// forma mais moderna: 
    //  for (auto it = valor.begin(); it != valor.end(); ++it)
    //  Ou
    /*  for (const auto& v : valor)
        {
            cout << v << endl;
        }*/

    for (map<string, string>::iterator it = paises.begin(); it != paises.end(); ++it) {
        cout << it->first << " - " << it->second <<endl;
    }
    /* for (const auto& par : paises)
        {
            cout << par.first << " - " << par.second << endl;
        }
       OU
        for (const auto& [pais, capital] : paises)
        {
            cout << pais << " - " << capital << endl;
        }
       Mais legível e menos verboso.
    */

    cout << p1.nome << " - " << p1.idade << endl;
    cout << p2.nome << " - " << p2.idade << endl;
    cout << v1.nome << " - " << v1.tipo << endl;

    return 0;
}