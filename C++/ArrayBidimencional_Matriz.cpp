#include <iostream>

using namespace std;

int main()
{   
	int matriz[3][4]; // 3 linhas e 4 colunas
    int l, c;

	// Preenchendo a matriz com o valor 1
	/*for (l = 0; l < 3; l++) {
		for (c = 0; c < 4; c++) {
			matriz[l][c] = 1;
		}
	}*/

	// Preenchendo a matriz com valores fornecidos pelo usuário
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 4; c++) {
			cin >> matriz[l][c];
		}
	}

	// Preenchendo a matriz com valores pré-definidos
	/*matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;

	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;

	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;*/

	// Exibindo os valores da matriz
	for (l = 0; l < 3; l++) {
        for (c = 0; c < 4; c++) {
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}