#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{   
    ofstream arquivoS;

    arquivoS.open("Alex Gomes");

    arquivoS << "Alex Gomes Schultz" << endl;
    arquivoS << "30 Anos" << endl;

    arquivoS.close();

    ifstream arquivoE;
    string linha;
    arquivoE.open("Alex Gomes");

    if (arquivoE.is_open()) {
        while (getline(arquivoE, linha)) {
            cout << linha << endl;
        }
        arquivoE.close();
    }
    else {
        cout << "Nao foi possível abrir o arquivo" << endl;
    }

    arquivoE.close();

    return 0;
}

/*
* Essa é a forma mais moderna e profissional em C++
* 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    {
        ofstream arquivoS("dados.txt");

        if (!arquivoS)
        {
            cout << "Nao foi possivel criar o arquivo" << endl;
            return 1;
        }

        arquivoS << "Alex Gomes Schultz" << endl;
        arquivoS << "30 Anos" << endl;
    } // arquivoS é fechado automaticamente aqui

    ifstream arquivoE("dados.txt");

    if (!arquivoE)
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return 1;
    }

    string linha;

    while (getline(arquivoE, linha))
    {
        cout << linha << endl;
    }

    return 0;
}
*/