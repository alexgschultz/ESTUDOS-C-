#include <iostream>
#include <memory>

using namespace std;

int main(){

    //int *pnum=new int();
    
    //unique_ptr<int>pnum(new int);
    
    //Para compartilhar o ponteiro:
    /*shared_ptr<int>pnum(new int);
    shared_ptr<int>pnum2=pnum;*/
    
    /**pnum=10;
    cout << *pnum << " - " << &pnum << endl;*/
    
    // Tipo String:
    /*string* str=new string("C++");
    
    cout << *str << " - Tamanho:" << str->size() << endl;
    
    delete str;*/
//---------------------------------------------------------------
    unique_ptr<string>str(new string("C++"));
    cout << *str << " - Tamanho:" << str->size() << endl;

    return 0;
}