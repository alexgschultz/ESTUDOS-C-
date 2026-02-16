#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack <string> cartas;
    
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de ouro");
    
    if(cartas.empty()){
    cout << "Pilha Vazia." << "\n\n";
    }else{
    cout << "Pilha com Cartas." << "\n\n";
    }
    
   // Pará esvaziar a Pilha de cartas:
    while(!cartas.empty()){
    cartas.pop();
    }
    
    cout << "Tamanho da Pilha: " << cartas.size() << endl;
    cout << "Carta do Topo: " << cartas.top() << endl;
    
    cartas.pop();
    cout << "Tamano Agora: " << cartas.size() << endl;
    cout << "Carta do Topo: " << cartas.top() << endl;
    
    return 0;
}