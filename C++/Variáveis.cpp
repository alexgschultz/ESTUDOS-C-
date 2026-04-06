#include<iostream>

using namespace std;

int main(){
    // Tipo e o Nome;
    // Tipo Nome = Valor;

    int vidas = 0; // 10, 25
	char letra = 'a'; // 'o', 'a'
	char letra[10] = "Olá, Mundo"; // "Olá", "Mundo"
	double decimal = 2.71828; // 3.14, 2.71828
	float decimal2 = 3.1; // 3.1, 2.7
	bool vivo = true; // true = verdadeiro / false = falso
	string nome = "João"; // "João", "Maria"

	// Outra forma de declarar variáveis:
	cout << "digite o número de vidas: ";
	cin >> vidas;
	cout << "digite uma letra: ";
	cin >> letra;
	cout << "digite um número decimal: ";
	cin >> decimal;
	cout << "digite seu nome: ";
	cin >> nome;

	// Imprimir na tela:
	cout << vidas << endl;
	cout << letra << endl;
	cout << letra[10] << endl;
	cout << decimal << endl;
	cout << decimal2 << endl;
	cout << vivo << endl;
	cout << nome << endl;

	// Ou imprimir  desta forma:
	cout << vidas << "\n" << letra << "\n" << letra[10] << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

    return 0;
}