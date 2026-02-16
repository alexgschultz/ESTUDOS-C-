#include<iostream>
#include<fstream>
// 0fstream, ifstream, fstream.

using namespace std;

int main(){

    ofstream arguivo;
    
    //arguivo.open("aulaC++",ios::app);
    arguivo.open("aulaC++");
    
    arguivo << "Aulas de C++\n";
    arguivo << "Curso do Sr.Bruno\n";
    arguivo << "YouTube Curso C++\n";
    
    arguivo.close();

    return 0;
}