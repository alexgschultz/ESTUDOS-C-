#include <iostream>
#include <string>

using namespace std;

int main()
{
// Usando std::string

    string nome;

    getline(cin, nome);

    cout << nome << endl;

//-----------------------------------------------------------------------------------------------------------------------------

// Usando new e delete

    char* vnome = new char[50];

    cin.getline(vnome, 50);

    cout << vnome << endl;

    delete[] vnome;

    return 0;
}