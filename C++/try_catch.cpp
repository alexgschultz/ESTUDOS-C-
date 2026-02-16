#include<iostream>
//#include<vector>
//#include<stdexcept>

using namespace std;

double divide(double, double);

int main(){

    //vector<int>num(5);
    double n1, n2;
    
    cin >> n1 >> n2;

    try{
    /*num.at(6)=10;
    cout << num[6] << endl;*/
    
    // double:
    cout << divide(n1,n2) << endl;
    
    }/*catch(exception & err){
    cout << "ERRO: " << err.what() << endl;}*/
    
    // A exceção para o throw:
    catch(const char* msg){
    cout << msg << endl;
    }
    
    return 0;
}
double divide(double n1, double n2){
    if(n2==0){
    throw "ERRO do divisor igual: 0";
    }
    return n1/n2;
}