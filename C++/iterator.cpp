#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <string> produtos={"Mouse", "Teclado", "Gabinete", "Monitor", "Headset"};
    vector <string>::iterator it;
    
    //it=produtos.begin();
    it=produtos.end()-1;// prev com end.
    
    //advance
    //next
    //prev
    
    //advance(it,1);
    
    //cout << *it << endl;
    //cout << *next(it,2) << endl;
    cout << *prev(it,1) << endl;
    
    return 0;
}