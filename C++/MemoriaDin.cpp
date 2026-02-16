#include<iostream>
#include<stdio.h>// Para função gets.
#include<stdlib.h>// Para função malloc.

using namespace std;

int main () {

    char *vnome;
    vnome=(char *) malloc(sizeof(char));
    
    //gets (vnome);
    cin >> vnome;
    
    cout << vnome << endl;

    return 0;
}