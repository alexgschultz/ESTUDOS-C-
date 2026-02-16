#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int>n{1,2,3,4,5,6};
    
    for_each(n.begin(),n.end(),[](int num){cout << num << endl;});


    return 0;
}