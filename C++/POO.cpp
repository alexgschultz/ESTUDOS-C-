#include <iostream>

using namespace std;

class aviao{
public:
    int vel = 0;
    int velMax = 0;
    string tipo;
    void ini(int tp);

private:

};

int main()
{   
    aviao *av1 =new aviao();
    aviao* av2 = new aviao();

    av1->ini(1);
    av2->ini(3);

    cout << av1->velMax << endl;
    cout << av2->velMax << endl;

    delete av1;
    delete av2;

    return 0;
}

void aviao::ini(int tp)// 1= Jato  2= Monomotor  3= Planador
{
    if (tp == 1)
    {
        this->velMax = 1000;
        this->tipo = "Jato";
    }
    else if (tp == 2)
    {
        this->velMax = 450;
        this->tipo = "Monomotor";
    }
    else
    {
        this->velMax = 180;
        this->tipo = "Planador";
    }
}