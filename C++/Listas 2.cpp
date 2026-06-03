#include <iostream>
#include <list>// Biblioteca para usar a estrutura de dados lista

using namespace std;

int main()
{
	list <int> aula, teste;
	int tam;
	list <int>::iterator it; // Iterador para percorrer a lista
	
	// A estrutura de dados lista para teste
	/*teste.push_front(1);
	teste.push_front(1);
	teste.push_front(1);
	teste.push_front(1);*/

	tam = 10;
	for (int i = 0; i < tam; i++)
	{
		aula.push_front(i);
	}

	it = aula.begin();
	advance(it, 5); // Avança o iterador 5 posições
	aula.insert(it, 0); // Insere o valor 0 na posição do iterador

	//aula.erase(it); Remove o elemento na posição do iterador
	aula.erase(--it); // Remove o elemento anterior à posição do iterador

	//aula.merge(teste); Mescla a lista teste na lista aula, mantendo a ordem

	//aula.clear(); Limpa a lista, removendo todos os elementos

	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	tam = aula.size();
	for (int i = 0; i < tam; i++)
	{
		cout << aula.front() << endl;
		aula.pop_front();
	}

	cout << "\nTamanho da lista: " << aula.size() << "\n\n";

	return 0;
}