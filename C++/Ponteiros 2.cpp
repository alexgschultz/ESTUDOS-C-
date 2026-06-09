#include <iostream>

using namespace std;

int main()
{   
	int* p;
	int vector[10];

	p = &vector[0]; // p = vector;
	cout << "\n" << "Valor do ponteiro: " << p << endl;

	p = vector; // p = &vector[0];
	cout << "\n" << "Valor do ponteiro: " << p << endl;

	*p = 10; // vector[0] = 10;
	cout << "\n" << "Valor do vetor[0]: " << vector[0] << endl;
	
	*(p += 1);
	*p = 20; // vector[1] = 20;
	cout << "\n" << "Valor do vetor[1]: " << vector[1] << endl;

	*(p += 1);
	*p = 30; // vector[2] = 30;
	cout << "\n" << "Valor do vetor[2]: " << vector[2] << endl;

	/**(p += 1); // p = p + 1; ou p++;
	cout << "\n" << "Valor do ponteiro: " << p << endl;

	*(p += 2);
	cout << "\n" << "Valor do ponteiro: " << p << endl;*/

	return 0;
}
