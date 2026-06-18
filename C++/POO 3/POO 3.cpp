#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{   
    Veiculo* v1 = new Veiculo(1);
    Veiculo* v2 = new Veiculo(2);
    Veiculo* v3 = new Veiculo(3);

    v1->setLigado(1);
    v2->setLigado(0);
    v3->setLigado(1);

    cout << v1->getVelMax() << endl;
    cout << v2->getVelMax() << endl;
    cout << v3->getVelMax() << endl;

    if (v1->getLigado()) {
        cout << "Veiculo 1 Ligado." << endl;
    }
    else {
        cout << "Veiculo 1 Desligado." << endl;
    }

    if (v2->getLigado()) {
        cout << "Veiculo 2 Ligado." << endl;
    }
    else {
        cout << "Veiculo 2 Desligado." << endl;
    }

    if (v3->getLigado()) {
        cout << "Veiculo 3 Ligado." << endl;
    }
    else {
        cout << "Veiculo 3 Desligado." << endl;
    }
    
    delete v1;
    delete v2;
    delete v3;
    return 0;
}