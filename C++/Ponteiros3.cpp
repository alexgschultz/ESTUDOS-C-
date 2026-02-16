#include<iostream>

using namespace std;

void somar(float *var, float valor);
void inivetor(float *n);

int main () {

    float num=0;
    float vetor[5];
    
    somar(&num,15);
    inivetor(vetor);
    
    cout << "\n" << num << "\n\n";
    
    for(int i=0;i<5;i++){
    cout << vetor[i] << "\n\n";
    }

    return 0;
}

void somar(float *var, float valor){
*var+=valor;
}

void inivetor(float *n){
n[0]=5;
n[1]=4;
n[2]=3;
n[3]=2;
n[4]=1;
}