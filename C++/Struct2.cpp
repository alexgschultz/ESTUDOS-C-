#include<iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int ano;
    int vel;
    int vma;
    
    void inserir(string stnome, string stcor, int stano, int stvel){
    nome=stnome;
    cor=stcor;
    ano=stano;
    vel=stvel;
    vma=0;
    }
    void mostra(){
    cout << "Nome: " << nome << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Vel: " << vel << endl;
    cout << "Velocidade Atual: " << vma << "\n\n";
    }
    void mudavel(int mv){
    vma=mv;
    if(vma>vel){
    vma=vel;
    }
    if(vma<0){
    vma=0;
    }
    
   }
    
};

int main(){

    Carro car1,car2;
    
    car1.inserir("Corola", "Prata", 2023, 240);
    car2.inserir("Nissan", "Preto", 2023, 350);
    
    car1.mudavel(100);
    car1.mostra();
    car2.mudavel(400);
    car2.mostra();

    return 0;
}