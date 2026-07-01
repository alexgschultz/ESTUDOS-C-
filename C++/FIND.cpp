#include <iostream>
#include <algorithm>// Biblioteca que contem a funcao find
#include <vector>// Biblioteca para utilizar o vetor
#include <list>// Biblioteca para utilizar a lista
#include <map>// Biblioteca para utilizar o mapa
#include <string>// Biblioteca para utilizar a string

using namespace std;

int main()
{	/*
    std::find

    Procura um elemento em um intervalo.

    Retorna:
        -> Iterador para o elemento encontrado.
        -> end() caso não encontre.

    Funciona com:
        - vector
        - list
        - array

    Outros tipos possuem seu próprio método find():
        - string
        - map
*/

	string texto{ "Hello, World!" };
	size_t pos = texto.find("World");

	if (pos != string::npos) {
		cout << "Palavra encontrada: " << pos << endl;

	}
	else {
		cout << "Palavra nao encontrada." << endl;
	}

	/*
	map<char, int>mapa;
	mapa['a'] = 5;
	mapa['b'] = 10;
	mapa['c'] = 1;
	mapa['d'] = 14;
	mapa['e'] = 8;
	mapa['f'] = 20;
	auto it = mapa.find('f');
	if (it != mapa.end()) {
		cout << "Chave encontrada: " << it ->second << endl;

	}
	else {
		cout << "Chave nao encontrada." << endl;
	}*/

	/*
	vector<int>numeros;
	auto it = numeros.end();
	int num, qtde = 10;
	while (qtde > 0) {
		cout << "Digite um numero: ";
		cin >> num;
		it = find(numeros.begin(), numeros.end(), num);
		if (it != numeros.end()) {
			cout << "Numero ja digitado, digite outro numero" << endl;

		}
		else {
			numeros.push_back(num);
			qtde--;
		}
	}*/

	/*
	list<int>n = { 5, 8, 52, 22, 4, 7, 14, 9 };
	auto it = find(n.begin(), n.end(), 4);
	if (it != n.end()) {
		cout << "Elemento encontrado: " << *it << endl;
	}
	else
	{
		cout << "Elemento nao encontrado" << endl;
	}*/
	
	/*
	vector<int>num = { 5, 8, 52, 22, 4, 7, 14, 9 };
	auto it = find(num.begin(), num.end(), 16);
	if (it != num.end()) {
		cout << "Elemento encontrado: " << *it << endl;
	}
	else
	{
		cout << "Elemento nao encontrado" << endl;
	}
	*/

	/*
	int vetor[] = { 5, 8, 52, 22, 4, 7, 14, 9 };
	int* p;
	size_t tam = sizeof(vetor) / sizeof(vetor[0]);
	p = find(vetor, vetor + tam, 8);
	if (p != vetor + tam) {
		cout << "Elemento encontrado: " << *p << endl;
	}
	else
	{
		cout << "Elemento nao encontrado" << endl;
	}
	*/

	size_t tamanho = texto.size();// size() retorna a quantidade de caracteres da string.
	size_t posicao = texto.find("World");// string::find() retorna a posição da primeira ocorrência da substring.

    return 0;
}