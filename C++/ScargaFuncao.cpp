#include<iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main()
{
    soma(50,40);
    soma();
    
    
    
    return 0;
}
void soma(int n1, int n2){
int res;
res=n1+n2;
cout << "\nA soma de " << n1 << " com " << n2 << " = " << res << "\n\n";
}

void soma(){
int n1,n2,res;
n1=10;
n2=25;
res=n1+n2;
cout << "A soma de " << n1 << " com " << n2 << " = " << res << "\n\n";
}