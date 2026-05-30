#include <iostream>

using namespace std;

int main()
{
	double Celsius;
	double Fahrenheit;
	cout << "Digite a temperatura em Celsius: ";
	cin >> Celsius;
	Fahrenheit = (9.0 / 5.0) * Celsius + 32;
	cout << "A temperatura em Fahrenheit é: " << Fahrenheit << endl;


	return 0;
}