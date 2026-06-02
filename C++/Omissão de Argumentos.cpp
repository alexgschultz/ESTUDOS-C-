#include <iostream>

using namespace std;

void imp(string txt = "Olá, mundo!"); // Argumento padrão

int main()
{
	imp("Alex"); // Chama a função com um argumento específico 
	imp(); // Chama a função sem argumento, usando o padrão

	return 0;
}

void imp(string txt)
{
	cout << "\n" << txt << endl;
}