#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack <string> cartas;
    
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de ouro");
    
    cout << "Tamanho da Pilha: " << cartas.size() << endl;
    cout << "Carta do Topo: " << cartas.top() << endl;
    
    cartas.pop();
    cout << "Tamano Agora: " << cartas.size() << endl;
    cout << "Carta do Topo: " << cartas.top() << endl;
    
    return 0;
}