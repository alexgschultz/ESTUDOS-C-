#include <iostream>

using namespace std;

void somar(float* var, float valor);
void ptar(float* V);

int main()
{   
    float num = 0;
    float vetor[5];

    somar(&num, 15);
    ptar(vetor);

    cout << num << "\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}

void somar(float* var, float valor)
{  
    *var += valor;
}

void ptar(float* V)
{
    V[0] = 0;
    V[1] = 1;
    V[2] = 2;
    V[3] = 3;
    V[4] = 4;
}