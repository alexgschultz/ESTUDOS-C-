#include<iostream>
#include<fstream>
// 0fstream, ifstream, fstream.

using namespace std;

int main(){

    ofstream arquivos;
    
    //arguivo.open("aulaC++",ios::app);
    arquivos.open("aulaC++");
    
    arquivos << "Aulas de C++\n";
    arquivos << "Curso do Sr.Bruno\n";
    arquivos << "YouTube Curso C++\n";
    
    arquivos.close();
    
    ifstream arquivoe;
    string linha;
    
    arquivoe.open("aulaC++");
    
    if(arquivoe.is_open()){
    while(getline(arquivoe,linha)){
    cout << linha << endl;
    }
    arquivoe.close();
    }else{
    cout << "Não foi possível abrir o arquivo." << endl;
    }

    return 0;
}