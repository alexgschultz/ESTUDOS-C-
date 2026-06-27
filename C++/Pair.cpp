#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{/*
    std::pair

    .first        -> Primeiro elemento.
    .second       -> Segundo elemento.
    make_pair()   -> Cria um pair.
    pair<>        -> Pode ser aninhado.
    vector<pair>  -> Lista dinâmica de pares.
*/
//=====================================================
// std::pair: Armazena dois valores, que podem ser de tipos diferentes.
// Acesso aos elementos: .first e .second.
//=====================================================

    pair<int, string> curso{ 2026, "C++" };

    cout << curso.first << " - " << curso.second << "\n\n";
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=====================================================
// Array de pair: Permite armazenar vários pares de valores.
//=====================================================

    const int tam{ 3 };

    pair<int, string> par[tam];

    par[0].first = 1;
    par[0].second = "Alex";

    par[1].first = 2;
    par[1].second = "Bianca";

    par[2].first = 3;
    par[2].second = "Brian";

    cout << par[1].first << " - " << par[1].second << "\n\n";


    par[0] = { 1, "C++" };
    par[1] = { 2, "JavaScript" };
    par[2] = { 3, "Python" };

    for (int i = 0; i < tam; i++) {
        cout << par[i].first << " - " << par[i].second << endl;
    }
    cout << endl;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=====================================================
// Pair aninhado: Um pair pode armazenar outro pair.
// Acesso: .second.first e .second.second.
//=====================================================

    pair<int, pair<string, double>> produtos[tam];

    produtos[0] = make_pair(1, make_pair("Mouse", 90.50));
    produtos[1] = make_pair(2, make_pair("Teclado", 120.85));
    produtos[2] = make_pair(3, make_pair("Monitor", 1200.40));

    for (int h = 0; h < tam; h++) {
        cout << produtos[h].first << " - " << produtos[h].second.first << " - " << produtos[h].second.second << endl;
    }
    /*
    pair<string, double> produto{"Mouse", 89.90};

    cout << produto.first << endl;
    cout << produto.second << endl;
    */
    cout << endl;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=====================================================
// Vector de pair: Armazena uma lista dinâmica de pares (chave/valor, código/nome, etc.).
//=====================================================

    vector<pair<int, string>> carros;

    carros.push_back(make_pair(1972, "Mustang"));// push_back(): Insere um novo pair no final do vector.
    carros.push_back(make_pair(2025, "Camaro"));
    carros.push_back(make_pair(2024, "Ferrari"));

    // j representa cada elemento (pair) armazenado no vector.
    for (const auto& j : carros) {// const auto& -> Percorre os elementos sem copiá-los e impede modificações.
        cout << j.first << " - " << j.second << endl;
    }

    return 0;
}