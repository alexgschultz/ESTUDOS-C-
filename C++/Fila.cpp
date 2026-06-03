#include <iostream>
#include <queue>// Biblioteca da fila: FIFO (First In, First Out) - Primeiro a entrar, primeiro a sair

using namespace std;

int main()
{   
	queue <string> cartas;

	cartas.push("As de Copas");
	cartas.push("As de Espadas");
	cartas.push("As de Ouros");
	cartas.push("As de Paus");

	cout << "Tamanho da Fila: " << cartas.size() << endl;
	cout << "Carta da Frente: " << cartas.front() << endl;// front: Acessa o elemento da frente da fila
	cout << "Ultima Carta: " << cartas.back() << "\n\n";// back: Acessa o elemento do final da fila

	while (!cartas.empty())
	{
		for (int i = 1; i <= 4; i++)// Loop para mostrar os números das cartas na fila
		{
			cout << "Carta na Fila " << i << ": " << cartas.front() << endl;
			cartas.pop();
		}
	}

  /*
  empty -> Verifica se a fila está vazia
  size -> Retorna o número de elementos na fila
  front -> Acessa o elemento da frente da fila
  back -> Acessa o elemento do final da fila
  push -> Adiciona um elemento no final da fila
  pop -> Remove o elemento da frente da fila
  */
    return 0;
}
