#include <iostream>

using namespace std;

int main(){

    int cor;
    
    cout << "Escolha uma cor:" << endl;
    cout << "(1)Verde, (2)Azul, (3)Vermelho" << endl;
    cin >> cor;
    
    switch(cor){
    case 1:
    cout << "Cor Verde selecionada." << endl;
    break;
    case 2:
    cout << "Cor Azul selecionada." << endl;
    break;
    case 3:
    cout << "Cor Vermelha selecionada." << endl;
    break;
    default:
    cout << "Cor Indisponível." << endl;
    }

    return 0;
}