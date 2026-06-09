#include <iostream>

using namespace std;

int main()
{   
	string veiculo = "Carro"; // variável do tipo string
	string* pv; // pv é um ponteiro para string

	pv = &veiculo; // pv recebe o endereço de veiculo

	cout << "Valor do ponteiro: " << pv << endl;
	// ambos devem ser iguais
	cout << "Endereço de veiculo: " << &veiculo << endl;

	cout << "Valor apontado pelo ponteiro: " << *pv << endl; // desreferenciando o ponteiro

	*pv = "Moto"; // alterando o valor apontado pelo ponteiro pv
	cout << veiculo << "\n" << *pv << endl; // veiculo e *pv ambos devem ser iguais

    return 0;
}