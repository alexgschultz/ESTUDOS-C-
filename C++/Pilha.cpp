#include <iostream>
#include <stack>// biblioteca para pilha

using namespace std;

int main()
{   
	stack <string> cartas; // criando uma pilha de cartas

	// Adicionando cartas à pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de Ouros");

	cout << "Tamanho da Pilha: " << cartas.size() << endl; // tamanho da pilha
	cout << "Carta do Topo: " << cartas.top() << endl; // carta do topo

	cartas.pop(); // remove a carta do topo da pilha

	cout << "Tamanho da Pilha: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.top() << endl;

	cartas.pop();

	cout << "Tamanho da Pilha: " << cartas.size() << endl;
	cout << "Nova carta do topo: " << cartas.top() << endl;

    return 0;
}