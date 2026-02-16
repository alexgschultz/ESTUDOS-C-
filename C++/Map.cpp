#include<iostream>
#include<map>

using namespace std;

int main(){
    //< CHAVE, VALOR >
    map<int,string>prod;
//------------------------------------------------------------------
    map<int,string>::iterator itmap;
    
    
    
    /*prod[0]="mouse";
    prod[1]="teclado";
    prod[2]="headset";
    prod[3]="monitor";*/
//------------------------------------------------------------------   
    prod.insert(pair<int,string>(0,"computador"));
    prod.insert(pair<int,string>(1,"mesa"));
    prod.insert(pair<int,string>(2,"monitor"));
    prod.insert(pair<int,string>(3,"cadeira"));
    // Modo para retirar um Elemento:
    /*prod.erase(2);
    // Para Limpar o Map:
    prod.clear();*/
    
    itmap=prod.find(3);// Para o código -> map<int,string>::iterator itmap;
    if(itmap==prod.end()){
    cout << "Produto não encontrado..." << endl;
    }else{
    cout << "Produto em estoque." << endl;
    cout << "Código:" << itmap->first << " Produto:" << itmap->second << endl;
    }
//----------------------------------------------------------------------------------------    
    
    /*for(int i=0;i<4;i++){
    cout << prod[i] << endl;
    }*/
    
    // For com Interator:
    /*for(auto it=prod.begin();it!=prod.end();it++){
    cout << it->first << endl;
    }*/
    
    // For com Base em Intervalo:
    /*for(auto it:prod){
    cout << it.second << endl;
    }*/
    
    return 0;
}