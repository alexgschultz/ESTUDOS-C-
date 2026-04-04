// PonteirosSemMedo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	// Declaração de um ponteiro para inteiro
	// ptr agora é uma variavel capaz de armazenar um endereço de memória, isso é indicado na declaração com o *(asterisco)
	int* ptr;
	int num = 10;
	char letra = 'A';
	int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ptr = &num; // ptr agora armazena o endereço de memória da variável num
	// Agora ptr aponta para num, ou seja, ptr contém o endereço de memória onde num está armazenado
	// e ele pode ser usado para acessar ou modificar o valor de num através dele mesmo(ptr)

	// *ptr Acesse o valor de meu apontado!
	printf("Valor de num via Ponteiro ptr: %d\n", *ptr);
	printf("Valor de Memoria de Num: %p, valor contido em ptr %p\n", &num, ptr);

	// &: endereço de memoria
	// Me traga o endereço de memória da variável num atualmente carregado na Ram
	printf("Valor de num: %d Endereco na Memoria: %p\n", num, &num);

	printf("Valor de letra %d Endereco na Memoria: %p\n", letra, &letra);

	// Endereço de numeros[0] obtido por &numeros[0]
	printf("Valor de numeros[0] %d Endereco na Memoria: %p\n", numeros[0], &numeros[0]);

	printf("Valor de numeros[7] %d Endereco na Memoria: %p\n", numeros[7], &numeros[7]);
	
	printf("Endereco na Memoria do vetor Numeros: %p\n", numeros);

	// Ops, ao colocar apenas o nome do vetor, apareceu o mesmo endereço de memória do vetor na posição 0, como se tiver no lugar de numeros abaixo assim:
	printf("Endereco na Memoria do vetor Numeros via &numeros[0]: %p\n", numeros);
	// ou seja &numeros[0] é o mesmo que escrever apenas numeros
	// &numeros[0] == numeros

	return 0;
}
