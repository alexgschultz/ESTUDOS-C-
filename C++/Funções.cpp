#include <iostream>

using namespace std;

void texto(); // protótipo da função
void soma(int a, int b); // protótipo da função
int soma2(int n1, int n2); // protótipo da função
void tr(string tra[4]);

int main()
{   
	//texto();
	soma(10, 20);
	string transp[4] = { "Carro", "Avião", "Navio", "Moto" };

	int res;
	res = soma2(100, 200);
	cout << "\nA soma de 100 + 200 = " << res << endl;
	// Esse cout 
	// ou 
	// esse cout estão correntos
	cout << "\nA soma de 100 + 200 = " << soma2(100, 200) << "\n\n";

	tr(transp); // Passando o array transp para a função tr

	for (int i = 0; i < 5; i++)
	{
		texto();
	}

    return 0;
}
// definição da função
void texto()
{
	cout << "\nEscrevendo um texto em C++" << endl;
}

void soma(int a, int b) // Void não retorna nada, apenas executa a função
{
	cout << "\nA soma de " << a << " + " << b << " = " << a + b << endl;
}

int soma2(int n1, int n2) // Int retorna um valor inteiro, nesse caso a soma de n1 + n2
{
	return n1 + n2;
}

void tr(string tra[4])
{
	for (int i = 0; i < 4; i++)
	{
		cout << tra[i] << endl;
	}
}