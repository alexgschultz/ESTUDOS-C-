#include <iostream>

using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;
	int sol = 1;
	char ch = 'A';

	// <, >, <=, >=, ==, !=

	if (num1 > 5)
	{
		cout << "num e maior que 5" << endl;
	} else
	{
		cout << "num nao e maior que 5" << endl;
	}
//------------------------------------------------------------------------------
	if (num1 > num2)
	{
		cout << "num1 e maior que num2" << endl;
	} else
	{
		cout << "num1 nao e maior que num2" << endl;
	}
//------------------------------------------------------------------------------
	if (sol)
	{
		cout << "sol e verdadeiro" << endl;
	} else
	{
		cout << "sol e falso" << endl;
	}
//------------------------------------------------------------------------------
	if (sol > num1)
	{
		cout << "Vou para a praia." << endl;
	} else
	{
		cout << "Vou estudar em casa." << endl;
	}

	return 0;
}
