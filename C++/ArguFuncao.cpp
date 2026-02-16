#include<iostream>
using namespace std;

void imp(string txt);
// Omissão de Argumento.
void imp(string txt="");
// Argumento Padrão.
void imp(string txt="Alex");

int main()
{
    imp("Bruno");
    
    
    
    
    return 0;
}
void imp(string txt){
cout << txt << endl;
}