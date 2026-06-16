#include <iostream>
#include <vector>// biblioteca para usar a classe vector

using namespace std;

int main()
{	
	vector<int> v1;// vector de int vazio / vector<int> v1(5); vector de int com 5 elementos
	vector<int> v2;
	int tam, i;

	v1.push_back(10);// adiciona o valor 10 no final do vector
	v1.push_back(5);// adiciona o valor 5 no final do vector
	v1.push_back(2);// adiciona o valor 2 no final do vector
	v1.push_back(7);// adiciona o valor 7 no final do vector
	v1.push_back(3);// adiciona o valor 3 no final do vector
	v1[3] = 15;// altera o valor do elemento na posição 3 para 15

	v2.push_back(1);// adiciona o valor 1 no final do vector
	v2.push_back(2);// adiciona o valor 2 no final do vector
	v2.push_back(3);// adiciona o valor 3 no final do vector
	v2.push_back(4);// adiciona o valor 4 no final do vector
	v2.push_back(5);// adiciona o valor 5 no final do vector

	v2.insert(v2.begin() + 1, 100);// insere o valor 100 na posição 1 do vector v2
	v2.insert(v2.end() - 2, 200);// insere o valor 200 no final do vector v2

	//v1.swap(v2);// troca os elementos dos vectors v1 e v2

	tam = v1.size();// retorna o tamanho do vector

	cout << "Tamanho do vector: " << tam << endl;

	cout << "primeiiro valor do v1: " << v1.front() << endl;// retorna o primeiro elemento do vector v1
	cout << "ultimo valor do v1: " << v1.back() << endl;// retorna o ultimo elemento do vector v1
	cout << "valor do meio do v1: " << v1.at(2) << endl;// retorna o value do elemento na posição 2 do vector v1

	for (i = 0; i < tam; i++)
	{
		cout << v1[i] << " ";// imprime os elementos do vector v1
	}

	cout << endl;
	for (i = 0; i < tam; i++)
	{
		cout << v2[i] << " ";// imprime os elementos do vector v2
	}

	return 0;
}
