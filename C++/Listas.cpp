#include <iostream>
#include <list>// Biblioteca para usar a estrutura de dados lista

using namespace std;

int main()
{   
	list <int> aula;
	int tam;
	list <int>::iterator it; // Iterador para percorrer a lista

	tam = 10;
	for (int i = 0; i < tam; i++)
	{
		aula.push_front(i);
	}

	it = aula.begin(); // Inicializa o iterador no início da lista
	advance(it, 5); // Avança o iterador 5 posições
	aula.insert(it, 0); // Insere o valor 0 na posição do iterador

	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	aula.sort(); // Ordena a lista
	aula.reverse(); // Inverte a ordem da lista

	tam = aula.size();
	for (int i = 0; i < tam; i++)
	{
		cout << aula.front() << endl;
		aula.pop_front();
	}

    return 0;
}