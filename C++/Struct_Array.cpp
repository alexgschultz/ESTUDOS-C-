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

    Carro *carros=new Carro[5];
    Carro car1,car2,car3,car4,car5;
    
    carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;
    
    carros[0].inserir("Corola", "Prata", 2023, 200);
    carros[1].inserir("Nissan", "Preto", 2023, 300);
    carros[2].inserir("Mustang", "Prata", 1978, 200);
    carros[3].inserir("Ferrari", "Vermelha", 2023, 350);
    carros[4].inserir("Jeep", "Branco", 2023, 200);
    
    for(int i=0;i<0;i++){
    carros[i].mostra();
    }

    return 0;
}