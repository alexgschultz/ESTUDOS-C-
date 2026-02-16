#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int x[10]{1,2,3,4,5,6,7,8,9,10};
    vector<int>n{10,20,30,40,50,60,70,80,90,100};
    
    /*for(int i=0;i<10;i++){
    cout << x[i] << endl;
    }*/
    for(int i:x){
    cout << i << endl;
    }
    for(int i:n){
    cout << i << endl;
    }
    
    return 0;
}