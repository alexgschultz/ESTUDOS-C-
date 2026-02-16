#include<iostream>
#include<vector>
using namespace std;

/*int soma(int n1,int n2){
    return n1+n2;
};*/
/*auto soma(int n1,int n2)->int{
    return n1+n2;
};*/
/*auto soma(double n1,double n2)->double{
    return n1+n2;
};*/

int main(){

    /*auto nome="Alex";
    auto num=28;
    auto altura=1.79;
    
    auto res=soma(10.5,14.2);
    cout << res << endl;*/
    
    vector<int>vec{10,20,30,40};
    for(auto it=vec.begin();it!=vec.end();it++){
    cout << *it << endl;
    }
    // register:
    register int cont;
    
    for(cont=0;cont<=10;cont++){
    cout << cont << endl;
    }
    for(register auto it=vec.begin();it!=vec.end();it++){
    cout << *it << endl;
    }
    
    return 0;
}