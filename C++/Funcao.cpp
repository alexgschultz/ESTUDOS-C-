#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int conta(int n1, int n2);
void tra(string tranp[4]);

int main(){
    
 // texto();
 
     int res;
     string tranp[4]={"Moto", "Carro", "Barco", "Avião"};
       
     soma(2,8);
     
     res= conta(15,12);
     
     cout << res << "\n\n";
     
     tra(tranp);

    return 0;
}

void texto(){
cout << "Alex Gomes" << "\n\n";
}
void soma(int n1, int n2){
cout << "A soma dos valores é: " << n1+n2 << "\n\n";
}
int conta(int n1, int n2){
return n1+n2;
}
void tra(string tranp[4]){
for (int i=0;i<4;i++){
cout << tranp[i] << endl;
}
}