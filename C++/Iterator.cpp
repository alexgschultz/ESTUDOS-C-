#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector<string>produt = {"Mouse", "Teclado", "Monitor", "Gabinete", "Som"};
    //vector<string>::iterator it;

    for (vector<string>::iterator it = produt.begin(); it != produt.end(); ++it)
    {
        cout << *it << endl;
    }

    // outra forma de escrever um for mais profissional
    /*for (auto it = produtos.begin(); it != produtos.end(); ++it)
    {
    cout << *it << endl;
    }*/

    //it = produt.begin();
    //it = produt.end();

    //advance(it, 1);
    //cout << *next(it, 3) << endl;
    //cout << *prev(it, 1) << endl;

    return 0;
}