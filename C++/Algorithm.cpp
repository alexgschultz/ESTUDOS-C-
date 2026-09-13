#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> valores{ 10, 20, 30, 20, 50, -5 };

    // =========================================================
    // find - procura um valor exato
    // =========================================================

    auto encontrado = std::find(valores.begin(), valores.end(), 30);

    if (encontrado != valores.end())
    {
        std::cout << "Valor encontrado: " << *encontrado << '\n';
    }

    // =========================================================
    // find_if - procura o primeiro valor que atende uma condição
    // =========================================================

    auto primeiroMaiorQue20 = std::find_if(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor > 20;
        }
    );

    if (primeiroMaiorQue20 != valores.end())
    {
        std::cout << "Primeiro maior que 20: " << *primeiroMaiorQue20 << '\n';
    }

    // =========================================================
    // count - conta um valor específico
    // =========================================================

    auto quantidade20 = std::count(valores.begin(), valores.end(), 20);

    std::cout << "Quantidade de 20: " << quantidade20 << '\n';

    // =========================================================
    // count_if - conta valores que atendem uma condição
    // =========================================================

    auto quantidadePositivos = std::count_if(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor > 0;
        }
    );

    std::cout << "Positivos: " << quantidadePositivos << '\n';

    // =========================================================
    // min_element / max_element
    // =========================================================

    auto menor = std::min_element(valores.begin(), valores.end());
    auto maior = std::max_element(valores.begin(), valores.end());

    std::cout << "Menor: " << *menor << '\n';
    std::cout << "Maior: " << *maior << '\n';

    // =========================================================
    // all_of - todos atendem a condição?
    // any_of - pelo menos um atende?
    // none_of - nenhum atende?
    // =========================================================

    bool todosPositivos = std::all_of(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor > 0;
        }
    );

    bool existeNegativo = std::any_of(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor < 0;
        }
    );

    bool nenhumMaiorQue100 = std::none_of(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor > 100;
        }
    );

    std::cout << std::boolalpha;
    std::cout << "Todos positivos: " << todosPositivos << '\n';
    std::cout << "Existe negativo: " << existeNegativo << '\n';
    std::cout << "Nenhum maior que 100: " << nenhumMaiorQue100 << '\n';

    // =========================================================
    // transform - transforma valores
    // =========================================================

    std::vector<int> dobrados(valores.size());

    std::transform(
        valores.begin(),
        valores.end(),
        dobrados.begin(),
        [](int valor)
        {
            return valor * 2;
        }
    );

    // =========================================================
    // replace - substitui um valor específico
    // replace_if - substitui usando uma condição
    // =========================================================

    std::replace(valores.begin(), valores.end(), 20, 25);

    std::replace_if(
        valores.begin(),
        valores.end(),
        [](int valor)
        {
            return valor < 0;
        },
        0
    );

    // =========================================================
    // sort - ordenação
    // =========================================================

    std::sort(valores.begin(), valores.end());

    // Ordem decrescente
    std::sort(valores.begin(), valores.end(), std::greater<>());

    // =========================================================
    // reverse - inverte a ordem atual
    // =========================================================

    std::reverse(valores.begin(), valores.end());

    // =========================================================
    // erase - remove um valor específico (C++20)
    // =========================================================

    std::erase(valores, 25);

    // =========================================================
    // erase_if - remove usando uma condição (C++20)
    // =========================================================

    std::erase_if(
        valores,
        [](int valor)
        {
            return valor < 10;
        }
    );

    // =========================================================
    // binary_search
    // O intervalo precisa estar ordenado.
    // Retorna apenas true ou false.
    // =========================================================

    std::sort(valores.begin(), valores.end());

    bool existe30 = std::binary_search(
        valores.begin(),
        valores.end(),
        30
    );

    std::cout << "Existe 30: " << existe30 << '\n';

    // =========================================================
    // lower_bound
    // Primeira posição onde o valor pode ser inserido
    // sem quebrar a ordenação.
    // =========================================================

    auto limiteInferior = std::lower_bound(
        valores.begin(),
        valores.end(),
        30
    );

    // =========================================================
    // upper_bound
    // Primeira posição depois dos valores iguais.
    // =========================================================

    auto limiteSuperior = std::upper_bound(
        valores.begin(),
        valores.end(),
        30
    );

    // =========================================================
    // equal_range
    // Retorna lower_bound e upper_bound juntos.
    // =========================================================

    auto [inicio, fim] = std::equal_range(
        valores.begin(),
        valores.end(),
        30
    );

    // =========================================================
    // mismatch
    // Encontra a primeira diferença entre dois intervalos.
    // =========================================================

    std::vector<int> a{ 10, 20, 30 };
    std::vector<int> b{ 10, 20, 40 };

    auto diferenca = std::mismatch(
        a.begin(),
        a.end(),
        b.begin()
    );

    if (diferenca.first != a.end())
    {
        std::cout << "Primeira diferenca: "
            << *diferenca.first << " e "
            << *diferenca.second << '\n';
    }

    // =========================================================
    // next_permutation
    // Gera a próxima permutação lexicográfica.
    // =========================================================

    std::vector<int> permutacao{ 1, 2, 3 };

    std::next_permutation(
        permutacao.begin(),
        permutacao.end()
    );

    std::cout << "Proxima permutacao: ";

    for (int valor : permutacao)
    {
        std::cout << valor << ' ';
    }

    std::cout << '\n';

    return 0;
}