#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int randomNum = rand() % 10 + 1;
	int num = 0;
	int tentativas = 0;


	while (num != randomNum) {
		cout << "Digite um numero inteiro: ";
		cin >> num;

		if (num < randomNum) {
			cout << "O numero e maior, tente de novo." << endl;
		}
		else if (num > randomNum) {
			cout << "O numero e menor, tente de novo." << endl;
		}
		tentativas++;
	}
	if (num == randomNum) {
		cout << "Parabens! Voce acertou o numero em " << tentativas << " tentativas!" << endl;
	}

	return 0;
}