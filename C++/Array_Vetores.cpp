#include <array>
#include <iostream>

int main()
{
    // =========================================================
    // std::array - vetor de tamanho fixo
    // =========================================================

    std::array<int, 5> vetor{};

    // Outra forma:
    // std::array<int, 5> vetor{10, 20, 30, 40, 50};

    // =========================================================
    // Atribuindo valores aos elementos
    // =========================================================

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    // vetor[5] = 60;
    // ERRO: índice fora dos limites.
    // O comportamento seria indefinido usando operator[].

    std::cout << vetor[3] << "\n\n";

    // =========================================================
    // Percorrendo usando índice
    // =========================================================

    for (std::size_t i = 0; i < vetor.size(); ++i)
    {
        std::cout << vetor[i] << '\n';
    }

    std::cout << '\n';

    // =========================================================
    // Percorrendo usando range-based for
    // =========================================================

    for (int valor : vetor)
    {
        std::cout << valor << '\n';
    }

    std::cout << '\n';

    // =========================================================
    // Outro std::array inicializado diretamente
    // =========================================================

    std::array<int, 5> numeros{ 1, 2, 3, 4, 5 };

    for (int numero : numeros)
    {
        std::cout << numero << ' ';
    }

    std::cout << '\n';

    return 0;
}