#include <iostream>
#include <vector>

using namespace std;

int soma(int n1, int n2) {
    return n1 + n2;
}

auto soma2(double n3, double n4)->double {
    return n3 + n4;
}

string vnome() {
    return "Alex Gomes";
}

void somador() {
    static auto i = 0;// static -> Em funções, a variável é criada apenas uma vez e mantém seu valor entre as chamadas. Em classes, cria um membro compartilhado entre todos os objetos.
    i++;
    cout << i << endl;
}

int main()
{   
    /*
    auto num{10}; auto -> Permite ao compilador deduzir automaticamente o tipo da variável a partir da inicialização.
    auto nome{ "Alex" }; -> deduz como const char* 
    auto nome = std::string("Alex"); nome vira uma string.
    auto valor{ 10.5 };

    //auto res = soma(10, 5);
    auto res2 = soma2(10.5, 5.2);
    auto res = vnome();

    cout << res2 << endl;
    cout << res << endl;
    */
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // register
    register int cont;// register -> Indicava ao compilador que a variável deveria ficar em um registrador da CPU. Hoje é obsoleto e ignorado pelos compiladores modernos.
    /*
   for (register auto it = v.begin(); it != v.end(); ++it) {
   cout << *it << endl;
   }
   */
    for (cont = 0; cont <= 10; cont++) {
        cout << cont << endl;
    }
    cout << endl;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // auto
    vector<int>v{ 1, 2, 3, 4, 5 };

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;
    }
    cout << endl;
   
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // static
    somador();
    somador();
    somador();
    somador();
    somador();

    return 0;
}