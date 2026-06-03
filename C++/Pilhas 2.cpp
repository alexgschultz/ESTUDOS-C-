#include <iostream>
#include <stack>// biblioteca para pilha

using namespace std;

int main()
{
	stack <string> cartas;// criando uma pilha de cartas

	// Adicionando cartas à pilha
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Paus");
	cartas.push("Rei de Ouros");

	// verificando se a pilha está vazia
	if (cartas.empty())
	{
		cout << "A pilha de cartas vazia." << "\n\n";
	}
	else
	{
		cout << "A pilha esta com cartas." << "\n\n";
	}

	while (!cartas.empty())
	{
		cout << "Carta do Topo: " << cartas.top() << endl;// carta do topo
		cartas.pop();// remove a carta do topo da pilha
	}

	push();// Adiciona um elemento à pilha 
	pop();// Remove o elemento do topo da pilha
	top();// Retorna o elemento do topo da pilha
	size();// Retorna o número de elementos na pilha
	empty();// Verifica se a pilha está vazia

	return 0;
}