#include <iostream>
#include <string.h>
using namespace std;
/* argc mostra a quantidade de argumentos.
   argv[] mostra os argumentos guardados.*/
int main(int argc, char * argv[]){

  /*  cout << argv[0] << endl;
    cout << argc << endl;*/
    
    if(argc > 1){
    if(!strcmp(argv[1],"sol")){
    cout << "Vou ao jogo" << endl;
    }
    else if(!strcmp(argv[1],"nublado")){
    cout << "Vou ao cinema." << endl;
    }else{
    cout << "Vou ficar em casa." << endl;
    }
    
    }

    return 0;
}