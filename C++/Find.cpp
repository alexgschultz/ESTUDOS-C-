#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
 
using namespace std;

int main(){

    int vetor[]={10,6,14,9,31,22};
    int *p;
    size_t tam=sizeof vetor/4;
    
    p=find(vetor,vetor+tam,10);
    if(p!=vetor+tam){
    cout << "Numeral Econtrado:" << *p << endl;
    }else{
    cout << "Numeral Não Encontrado..." << endl;
    }
//-----------------------------------------------------------------------
    // Vector com Interator: 
    vector<int>num={10,6,14,9,31,22};
    
    auto it=find(num.begin(),num.end(),10);
    if(it!=num.end()){
    cout << "Numeral Econtrado:" << *it << endl;
    }else{
    cout << "Numeral Não Encontrado..." << endl;
    }
//-----------------------------------------------------------------------    
    // List
    list<int>num={10,6,14,9,31,22};
    
    auto it=find(num.begin(),num.end(),10);
    if(it!=num.end()){
    cout << "Numeral Econtrado:" << *it << endl;
    }else{
    cout << "Numeral Não Encontrado..." << endl;
    }

    return 0;
}