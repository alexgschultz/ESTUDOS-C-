#include<iostream>

using namespace std;

int main()
{
    enum armas{rifle=20, escopeta=12, pistola=15, faca=1};
    
    armas armasel= pistola;
    
    cout << armasel << endl;
    
    
    return 0;
}