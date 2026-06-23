#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>// Biblioteca para os comandos cin e getline

using namespace std;

int main()
{
    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("nome.txt", ios::out | ios::app);

    if (!arquivo)
    {
        cout << "Nao foi possivel criar o arquivo" << endl;
        return 1;
    }

    while (opc == 's' || opc== 'S')
    {
        cout << "Digite um Nome: " << endl;
        cin >> nome;
        arquivo << nome << endl;
        cout << "\nDeseja digitar um novo nome? [S/N] " << endl;
        cin >> opc;
        system("cls");
    }
    arquivo.close();

    arquivo.open("nome.txt", ios::in);

    cout << "Nomes digitados" << endl;

    if (arquivo.is_open()) {
        while (getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
    }
    else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

    return 0;
}

// Versão mais recomendada e profissional
/*
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    {
        std::ofstream arquivo("nome.txt", std::ios::app);

        if (!arquivo)
        {
            std::cerr << "Nao foi possivel abrir o arquivo para escrita.\n";
            return 1;
        }

        char opc = 'S';

        while (opc == 's' || opc == 'S')
        {
            std::string nome;

            std::cout << "Digite um nome: ";
            std::getline(std::cin >> std::ws, nome);

            arquivo << nome << '\n';

            std::cout << "Deseja digitar um novo nome? [S/N]: ";
            std::cin >> opc;
        }
    } // arquivo fechado automaticamente

    std::ifstream arquivo("nome.txt");

    if (!arquivo)
    {
        std::cerr << "Nao foi possivel abrir o arquivo para leitura.\n";
        return 1;
    }

    std::cout << "\nNomes digitados:\n\n";

    std::string linha;

    while (std::getline(arquivo, linha))
    {
        std::cout << linha << '\n';
    }

    return 0;
}
*/