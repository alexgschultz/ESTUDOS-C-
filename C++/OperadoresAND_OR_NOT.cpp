#include <iostream>

using namespace std;

int main()
{   
    int num;

    /*
        1 2 3 4 5 6 7 8 9 10
        >4 e <7
    */

    num = 10;

    if (num > 4 && num < 7) {
        cout << "\nValor Aceito." << endl;
    } else {
        cout << "\nNao Aceito." << endl;
	}
//----------------------------------------------------------------------------------------------

    if ((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)) {
        cout << "\nValor Aceito." << endl;
    }
    else {
        cout << "\nNao Aceito." << endl;
    }
//----------------------------------------------------------------------------------------------

    bool a = true;
    bool b = false;

     cout << "a e b: " << (a && b) << endl; // AND lógico
     cout << "a ou b: " << (a || b) << endl; // OR lógico
	 cout << "Não a: " << (!a) << endl; // NOT lógico

    return 0;
}
