#include <iostream>

using namespace std;

int main()
{
	int i = 0; // Inicializa a variável i com o valor 0

	while (i < 10) { // Enquanto i for menor que 10, o código dentro do bloco será executado
          cout << "Valor de i: " << i << endl;
		  i++; // Incrementa o valor de i em 1 a cada iteração para evitar um loop infinito
    }

    return 0;
}