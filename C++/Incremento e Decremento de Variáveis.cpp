#include <iostream>

using namespace std;

int main()
{
	int n1, n2;

	n1 = 0;
	n2 = 10;

	cout << n1 << "\n\n";

	//n1 = n1 + 1;
	n1 += 1;// n1 -= 1;  n1 *= 1;  n1 /= 1;  n1 %= 1;
	
	// pós-fixado:
	n1++;// n1--;  
	
	// pré-fixado:
	++n1; // --n1;

	//cout << n1 << "\n\n";
	//cout << n1++ << "\n\n";// n1++: primeiro exibe o valor de n1 e depois incrementa.
	cout << ++n1 << "\n\n";// ++n1: primeiro incrementa o valor de n1 e depois exibe.

	return 0;
}