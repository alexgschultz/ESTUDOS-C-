#include<iostream>

using namespace std;

int main(){

    string veiculo= "carro";
    string *pv;
            // Descrição de Ponteiro:
    pv=&veiculo;// O ponteiro pV, recebe o endereço da variável veículo.
    
    
    cout << pv << endl;
    
    *pv="Moto";// No endereço apontado por *pv, adicione o valor: Moto.
    
    cout << "\n" << veiculo << "\n" << *pv << endl;

    return 0;
}