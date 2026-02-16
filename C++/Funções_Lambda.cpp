#include<iostream>
#include<vector>

using namespace std;

int main(){

    [](){};
    
    /*auto maior=[](int n1, int n2)->int{
    return(n1>n2)?n1:n2;
    };
    cout << maior(5,2) << endl;*/
    
    /*auto maior=[](vector<int>n)->int{
    auto m=0;
    for(int x:n){
    m=(m>x)?m:x;
    }
    return m;
    };
    cout << maior({10,4,55,60,34,5}) << endl;*/
    
    int x1,x2,x3,x4;
    x1=20;
    x2=5;
    x3=8;
    x4=2;
    
    /*auto soma=[x1,x2,x3,x4]()->int{
    return x1+x2+x3+x4;
    };
    cout << soma() << endl;*/
    
    auto soma=[=]()->int{
    return x1+x2+x3+x4;
    };
    cout << soma() << endl;
    
    return 0;
}