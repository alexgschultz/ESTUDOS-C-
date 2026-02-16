#include<iostream>
#include<list>

using namespace std;

int main(){
    
    list<int> aula;
    
    int tam=10;
    
    for(int i; i=0; i<tam; i++){
    aula.push_front(i);
    }
    
    cout << "Tamanho da Aula: " << aula.size() << "\n\n";
    
    tam=aula.size();
    for(int i; i=0; i<tam; i++){
    cout << aula.front() << "\n\n";
    aula.pop_front();
    }
    
    return 0;
}