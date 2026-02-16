#include<iostream>
#include<vector> // Para trabalhar com o vector.

using namespace std;

int main(){

    vector<int> num1;
    vector<int> num2;
    int tam1,tam2, i;
    
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    // num1[3]=12;
    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    
    //num1.swap(num2);// Troca de Valores.
    num1.insert(num1.begin()+1,88);// Inserindo valor;
    num1.erase(num1.end()-1);// Retirando Valores.
    
    tam1=num1.size();
    tam2=num2.size();
    
    cout << "Primeiro número de num1: " << num1.front() << endl;
    cout << "Último número de num1: " << num1.back() << endl;
    cout << "Número do Meio: " << num1.at(tam1/2) << endl;

    cout << "Tamanho do Vector 1: " << tam1 << endl;
    cout << "Tamanho do Vector 2: " << tam2 << endl;
    
    for(i=0;i<tam1;i++){
    cout << num1[i] << " ";
    }
    cout << endl;
    
    for(i=0;i<tam2;i++){
    cout << num2[i] << " ";
    }
    
    while(!num2.empty()){
    num2.pop_back();
    }
    cout << "\nNovo Tamanho de num2: " << num2.size() << endl;
    
    return 0;
}