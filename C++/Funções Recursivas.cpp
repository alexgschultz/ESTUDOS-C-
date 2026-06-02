#include <iostream>

using namespace std;

void contador(int num, int cont = 0); // Prototipo da função

int main()
{   
	contador(20);

    return 0;
}

void contador(int num, int cont) // Função recursiva
{
	cout << cont << endl;
	if (num > cont)
	{
		contador(num, ++cont);
	}
}

/*void contador(int num)
{
	for (int i = 0; i <= num; i++)
	{
		cout << i << endl;
	}
}*/