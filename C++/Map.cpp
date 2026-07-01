#include <iostream>
#include <map>// Biblioteca para uso do map.

using namespace std;

int main()
{
    /*
        std::map

        first     -> Chave.
        second    -> Valor.

        insert()  -> Insere um elemento.
        emplace() -> Insere um elemento construindo-o diretamente.
        find()    -> Procura uma chave e retorna um iterador.
        erase()   -> Remove um ou mais elementos.
        clear()   -> Remove todos os elementos.
        size()    -> Retorna a quantidade de elementos.
        empty()   -> Verifica se o map está vazio.
    */

    //======================================================================================================================
    // Declaração de um map.
    // chave -> int
    // valor -> string
    //======================================================================================================================

    map<int, string> prod{};

    //======================================================================================================================
    // Inserção de elementos.
    // emplace() é a forma moderna de inserir elementos no map.
    //======================================================================================================================

    prod.emplace(1, "Mouse");
    prod.emplace(2, "Teclado");
    prod.emplace(3, "Monitor");
    prod.emplace(4, "Camera");
    prod.emplace(5, "Caixa de Som");
    prod.emplace(6, "Microfone");

    // Também é possível:
    // prod.insert({7, "Webcam"});
    // prod[8] = "Headset";

//======================================================================================================================
// Remoção de elementos.
//======================================================================================================================

    // prod.erase(3);                          // Remove pela chave.
    // prod.erase(prod.find(2), prod.find(4)); // Remove um intervalo.
    // prod.clear();                           // Remove todos os elementos.

//======================================================================================================================
// Percorrendo o map.
// const auto& -> Evita cópias e impede modificações.
//======================================================================================================================

    cout << "Produtos cadastrados:\n\n";

    for (const auto& it : prod)
    {
        cout << it.first << " - " << it.second << endl;
    }

    //======================================================================================================================
    // Busca de elementos.
    // find(): Procura uma chave.
    // Se não encontrar, retorna end().
    //======================================================================================================================

    auto itprod = prod.find(4);

    cout << "\n";

    if (itprod != prod.end())
    {
        cout << "Produto encontrado.\n";
        cout << "Codigo: " << itprod->first << "   Produto: " << itprod->second << endl;
    }
    else
    {
        cout << "Produto nao encontrado.\n";
    }

    //======================================================================================================================
    // Métodos úteis.
    //======================================================================================================================

    cout << "\nQuantidade de produtos: " << prod.size() << endl;

    if (prod.empty())
    {
        cout << "O map esta vazio.\n";
    }
    else
    {
        cout << "O map possui elementos.\n";
    }

    return 0;
}