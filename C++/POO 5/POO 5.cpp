#include <iostream>
#include "classes.h"

using namespace std;

int main()
{   
    Base1 obj;
    Base2 obj2;
    CFB obj3;

    obj.impBase1();
    obj2.impBase2();

    cout << endl;

    obj3.impBase1();
    obj3.impBase2();

    return 0;
}
