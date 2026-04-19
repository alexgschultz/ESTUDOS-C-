#include <iostream>

using namespace std;

int main()
{   // Expressão: ? valor1 : valor2

    int n1, n2, nota, res2;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota= n1 + n2;

	// (nota >= 60) ? res= "Aprovado" : res= "Reprovado";
    res= (nota >= 60) ? "Aprovado" : "Reprovado";
	// res2 = (nota >= 60) ? "Aprovado" : "Reprovado"; Erro de compilação, pois res2 é do tipo inteiro e o resultado da expressão é uma string

    cout << "\nResultado: " << res << endl;

    return 0;
}
