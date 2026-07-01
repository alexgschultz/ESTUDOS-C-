#include <iostream>
#include <locale>

using namespace std;

int main()
{   /*
    <locale>

    setlocale()

    Configura a localização (locale) do programa,
    permitindo utilizar acentuação e outras
    configurações regionais.

    LC_ALL
        -> Aplica a configuração para todas as categorias.

    "pt_BR.UTF-8"
        -> Define o idioma para Português (Brasil) usando UTF-8.
*/
    if (setlocale(LC_ALL, "pt_BR.UTF-8") == nullptr)
    {
        cout << "Nao foi possivel configurar a locale." << endl;
        return 1;
    }
    cout << "É possível escrever Maçã." << endl;
    cout << "É possível escrever: Maçã, Ação, Coração, João." << endl;

    return 0;
}