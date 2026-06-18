#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{   
    moto* v1 = new moto();
    carro* v2 = new carro();
    tanque* v3 = new tanque();

    //cout << v1->rodas << endl;
    v1->imp();
    v2->imp();
    v3->imp();

    delete v1;
    delete v2;
    delete v3;
    return 0;
}