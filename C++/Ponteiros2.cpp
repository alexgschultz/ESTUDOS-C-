#include<iostream>

using namespace std;

int main(){

    int *p;
    int vetor[10];
        // Duas formas de declarar:
    p=&vetor[0];// p=vetor;
    cout << "\n" << p << "\n\n";
    
    *p=10;
    cout << vetor[0] << endl;
    // Acrescentando valor na outra posição.
    *(p+=1);
    *p=20;// vetor[1]=20;
    cout << vetor[1] << endl;
    
    *(p+=1);
    *p=30;// vetor[2]=30
    cout << vetor[2] << endl;


    return 0;
}