#include<iostream>
using namespace std;

int main()
{
   // int vetor[5];
    int vetor[5]={10,20,30,40,50};
    int i;
    
   /* vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;*/
    
    /*cout << vetor[0] << endl;
    cout << vetor[1] << endl;*/
    
   /* for(i=0;i<5;i++){
    cout << vetor[i] << endl;
    }*/
    
    for(i=0;i<sizeof(vetor)/4;i++){
    cout << vetor[i] << endl;
    }
    
    return 0;
}