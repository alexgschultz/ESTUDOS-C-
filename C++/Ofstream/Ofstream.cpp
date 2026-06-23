#include <iostream>
#include <fstream>

using namespace std;

int main() // ofstream: Escrever arquivos   ifstream: Ler arquivos   fstream: Ler e escrever arquivos
{   
    ofstream arquivo;

    arquivo.open("Alex Gomes");
    //arquivo.open("Alex Gomes", ios::app); Para adicionar conteúdo, ios::app coloca o cursor no final do arquivo e insere o conteúdo na sequência

    arquivo << "Alex Gomes Schultz 30 anos" << endl;

    arquivo.close();

    // Uma forma mais recomendada de escrever:

    ofstream arquivo("dados.txt");// sem a necessidade do uso de open()

    arquivo << "Alex" << endl;
    arquivo << "30" << endl;

    arquivo.close();

    // dessa forma ele já abre o arquivo no momento da criação do objeto, deixando o código mais curto e claro.

    return 0;
}