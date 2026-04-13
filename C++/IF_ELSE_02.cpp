#include <iostream>
#include <cstdlib> // Para usar a função system("cls") para limpar a tela do console

using namespace std;

int main()
{
	int n1, n2, res;
	char opc;

	inicio: // Rótulo para o comando goto

	system("cls"); // Limpa a tela do console

	cout << "Digite o valor da nota 1: ";
	cin >> n1;

	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	
	res = n1 + n2;

	/*
	   >= 60 Aprovado
	   >= 40 e <= 50 Recuperação
	   < 40 Reprovado
	*/

	if (res >= 60)
	{
		cout << "\nAluno Aprovado" << endl;
	}
	else if (res >= 40)
	{
		cout << "\nAluno em Recuperacao" << endl;
	}
	else
	{
		cout << "\nAluno Reprovado" << endl;
	}

	cout << "\nDeseja Digitar Outra Nota? (S/N): ";
	cin >> opc;

	if (opc == 'S' or opc == 's')
	{
		goto inicio; // Volta para o rótulo "inicio" para repetir o processo
	}

	return 0;
}