#include<iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int ano;
    int vel;
};

int main(){

    Carro car1, car2;
    
    car1.nome="Corola";
    car1.cor="Preto";
    car1.ano=2023;
    car1.vel=250;
    
    car2.nome="Ferrary";
    car2.cor="Vermelho";
    car2.ano=2023;
    car2.vel=320;

    cout << "Nome: " << car1.nome << endl;
    cout << "Cor: " << car1.cor << endl;
    cout << "Ano: " << car1.ano << endl;
    cout << "Vel: " << car1.vel << "\n\n";
    
    cout << "Nome: " << car2.nome << endl;
    cout << "Cor: " << car2.cor << endl;
    cout << "Ano: " << car2.ano << endl;
    cout << "Vel: " << car2.vel << endl;
    
    return 0;
}