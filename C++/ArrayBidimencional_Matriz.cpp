#include <array>
#include <iostream>

int main()
{
    std::array<std::array<int, 4>, 3> matriz{};

    // =========================================================
    // Preenchendo a matriz com o valor 1
    // =========================================================

    /*
    for (auto& linha : matriz)
    {
        linha.fill(1);
    }
    */

    // =========================================================
    // Preenchendo a matriz com valores fornecidos pelo usuário
    // =========================================================

    for (auto& linha : matriz)
    {
        for (auto& valor : linha)
        {
            std::cin >> valor;
        }
    }

    // =========================================================
    // Preenchendo a matriz com valores pré-definidos
    // =========================================================

    /*
    matriz = {{
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {2, 2, 2, 2}
    }};
    */

    // =========================================================
    // Exibindo os valores da matriz
    // =========================================================

    for (const auto& linha : matriz)
    {
        for (int valor : linha)
        {
            std::cout << valor << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}