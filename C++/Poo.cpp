#include<iostream>

using namespace std;

class aviao{

public:
    int vel=0;
    int velmax;
    string tipo;
    void ini(int tp);

private:


};
void aviao::ini(int tp){//1-Jato, 2-Monomotor, 3-Planador.
    if(tp==1){
    this->velmax=2000;
    this->tipo="Jato";
    }else if(tp==2){
    this->velmax=400;
    this->tipo="Monomotor";
    }else if(tp==3){
    this->velmax=150;
    this->tipo= "Planador";
    }
}

int main(){

    aviao *avi=new aviao();
    aviao *avi2=new aviao();
    
    avi->ini(3);
    avi2->ini(1);
    
    
    cout << avi->velmax << endl;
    cout << avi2->velmax << endl;

    return 0;
}