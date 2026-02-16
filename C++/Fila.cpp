#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    queue <string> cartas;
    
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de Paus");
    
    cout << "Tamanho da Fila: " << cartas.size() << endl;
    cout << "Primeira Carta: " << cartas.front() << endl;
    cout << "Última Carta: " << cartas.back() << "\n\n";
    
    while(!cartas.empty()){
    cout << "Primeira Carta: " << cartas.front() << endl;
    cartas.pop(); 
    }

// size(), empty(), front(), back(), push(), pop().
    return 0;
}