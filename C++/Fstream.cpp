#include<iostream>
#include<fstream>
#include<cstdlib>
// 0fstream, ifstream, fstream.

using namespace std;

int main(){

    fstream arquivo;
    char opc='S';
    string nome,linha;
    
    arquivo.open("AlexC++",ios::out);
    
    while((opc=='S')or(opc=='s')){
    cout << "Digite um nome: " << endl;
    cin >> nome;
    arquivo << nome << endl;
    cout << "Quer digitar um novo nome?[s/n]" << endl;
    cin >> opc;
    system("CLS");
    }
    arquivo.close();
    // arquivo de entrada:
    arquivo.open("AlexC++",ios::in);

    if(arquivo.is_open()){
    while(getline(arquivo,linha)){
    cout << linha << endl;
    }
    arquivo.close();
    }else{
    cout << "Não foi possível abrir o arquivo." << endl;
    }
    return 0;
}