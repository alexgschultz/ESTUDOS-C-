#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct pessoa{
    string nome;
    int idade;
};
class veiculo{
public:
    string nome;
    int ano;
};

int main(){

    int num{10};
    string nome{"Alex"};
    int vetor[]{1,2,3,4,5,6,7,8,9,10};
    vector<int>valores{1,2,3,4,5};
    map<string,string>estados{{"ES","RJ"}};
       
    cout << num << endl;
    cout << nome << endl;
    cout << vetor[4] << endl;
    
    pessoa p1{"Alex",28};
    pessoa p2{"Bruno",38};
    
    cout << p1.nome << "," << p1.idade << endl;
    
    veiculo v1{"Mustang",1978};
    
    cout << v1.nome << "," << v1.ano << endl;
    
    for(vector<int>::iterator it=valores.begin();it!=valores.end();it++){
    cout << *it << endl;
    }
    for(map<string,string>::iterator it=estados.begin();it!=estados.end();it++){
    cout << it->first << "," << it->second << endl;
    }

    return 0;
}