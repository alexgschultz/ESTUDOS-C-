#include <iostream>
#include <stdio.h>// Inclui a biblioteca de entrada e saída padrão do C
#include <math.h>// Inclui a biblioteca de matemática para usar a constante M_PI

using namespace std;

int main()
{	
	//float pi = M_PI; // M_PI é uma constante definida em math.h que representa o valor de pi
	int num = 5;// Exemplo de variável inteira
	int Num = 5;
	double n1 = 5;

	printf("O valor de num: %d", num);
	printf("\nO valor de num: %07d", Num);// O formato %07d indica que o número deve ser impresso com pelo menos 7 dígitos, preenchendo com zeros à esquerda se necessário
	printf("\nO valor de n1: %07.1f", n1);// O formato %07.1f indica que o número deve ser impresso com pelo menos 7 caracteres, incluindo um dígito decimal e um dígito após a vírgula, preenchendo com zeros à esquerda se necessário
	//printf("O valor de pi é: %.2f", pi);
	printf("\nHello, World!\n");

	return 0;
}
