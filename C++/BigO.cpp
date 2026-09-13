#include <algorithm>
#include <iostream>
#include <vector>

// =========================================================
// Big O - Resumo prático em C++20
// =========================================================
//
// Big O descreve como o custo de um algoritmo cresce
// conforme a quantidade de dados (n) aumenta.
//
// Complexidades principais:
//
// O(1)       -> constante
// O(log n)   -> logarítmica
// O(n)       -> linear
// O(n log n) -> linearítmica
// O(n²)      -> quadrática
// O(n³)      -> cúbica
// O(2^n)     -> exponencial
//
// Regra geral:
//
// O(1) < O(log n) < O(n) < O(n log n)
//      < O(n²) < O(n³) < O(2^n)
//
// =========================================================


// =========================================================
// O(1) - Tempo constante
// =========================================================
//
// O custo não depende da quantidade de elementos.
//
// vector possui acesso direto por índice.
//
// 10 elementos       -> 1 acesso
// 1.000.000 elementos -> 1 acesso
//

int acessar(const std::vector<int>& valores, std::size_t indice)
{
    return valores[indice];
}


// =========================================================
// O(log n) - Tempo logarítmico
// =========================================================
//
// O problema é reduzido significativamente a cada passo.
//
// Exemplo:
// 1024 -> 512 -> 256 -> 128 -> ... -> 1
//

int contarDivisoes(int n)
{
    int passos = 0;

    while (n > 1)
    {
        n /= 2;
        ++passos;
    }

    return passos;
}


// =========================================================
// O(log n) - Busca binária manual
// =========================================================
//
// IMPORTANTE:
// os valores precisam estar ordenados.
//

bool buscaBinaria(const std::vector<int>& valores, int alvo)
{
    int inicio = 0;
    int fim = static_cast<int>(valores.size()) - 1;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        if (valores[meio] == alvo)
        {
            return true;
        }

        if (valores[meio] < alvo)
        {
            inicio = meio + 1;
            continue;
        }

        fim = meio - 1;
    }

    return false;
}


// =========================================================
// O(n) - Tempo linear
// =========================================================
//
// Percorre todos os elementos uma vez.
//
// n = 10      -> aproximadamente 10 operações
// n = 1.000   -> aproximadamente 1.000 operações
//

long long somar(const std::vector<int>& valores)
{
    long long soma = 0;

    for (int valor : valores)
    {
        soma += valor;
    }

    return soma;
}


// =========================================================
// O(n) - Busca linear
// =========================================================
//
// Funciona mesmo se os dados estiverem desordenados.
//

bool buscaLinear(const std::vector<int>& valores, int alvo)
{
    for (int valor : valores)
    {
        if (valor == alvo)
        {
            return true;
        }
    }

    return false;
}


// =========================================================
// O(n) - Constantes são ignoradas
// =========================================================
//
// Este loop executa aproximadamente n / 2 vezes.
//
// O(n / 2) -> O(n)
//

void metadeDosElementos(int n)
{
    for (int i = 0; i < n; i += 2)
    {
        // operação O(1)
    }
}


// =========================================================
// O(n) - Loops consecutivos
// =========================================================
//
// O(n) + O(n)
// O(2n)
//
// Em Big O:
//
// O(2n) -> O(n)
//

void doisLoops(int n)
{
    for (int i = 0; i < n; ++i)
    {
        // O(n)
    }

    for (int i = 0; i < n; ++i)
    {
        // O(n)
    }
}


// =========================================================
// O(n log n)
// =========================================================
//
// Um processo O(log n) executado n vezes.
//
// n * log(n)
//
// Muitos algoritmos eficientes de ordenação possuem
// comportamento O(n log n).
//

long long linearLogaritmico(int n)
{
    long long operacoes = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = n; j > 1; j /= 2)
        {
            ++operacoes;
        }
    }

    return operacoes;
}


// =========================================================
// std::sort - O(n log n)
// =========================================================
//
// Para comparação prática de complexidade,
// std::sort possui complexidade O(n log n).
//

void ordenar(std::vector<int>& valores)
{
    std::sort(valores.begin(), valores.end());
}


// =========================================================
// O(n²) - Tempo quadrático
// =========================================================
//
// Dois loops dependentes de n.
//
// n * n = n²
//
// n = 10    -> 100
// n = 100   -> 10.000
// n = 1.000 -> 1.000.000
//

long long quadratico(int n)
{
    long long operacoes = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++operacoes;
        }
    }

    return operacoes;
}


// =========================================================
// O(n³) - Tempo cúbico
// =========================================================
//
// Três loops dependentes de n.
//
// n * n * n = n³
//

long long cubico(int n)
{
    long long operacoes = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                ++operacoes;
            }
        }
    }

    return operacoes;
}


// =========================================================
// O(2^n) - Tempo exponencial
// =========================================================
//
// Exemplo clássico:
// Fibonacci recursivo sem otimização.
//
// Cada chamada pode gerar outras duas chamadas.
//
// O crescimento é muito rápido.
//
// Esta implementação é apenas didática.
// Não é uma boa implementação real de Fibonacci.
//

long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}


// =========================================================
// Simplificação de Big O
// =========================================================
//
// 1) Constantes são ignoradas:
//
// O(2n)       -> O(n)
// O(100n)     -> O(n)
// O(n / 2)    -> O(n)
//
// ---------------------------------------------------------
//
// 2) Mantemos o termo dominante:
//
// O(n + 1)        -> O(n)
// O(n + log n)    -> O(n)
// O(n² + n)       -> O(n²)
// O(n³ + n² + n)  -> O(n³)
//
// ---------------------------------------------------------
//
// 3) Loops consecutivos somam:
//
// O(n) + O(n)
// -> O(2n)
// -> O(n)
//
// ---------------------------------------------------------
//
// 4) Loops aninhados normalmente multiplicam:
//
// O(n) * O(n)
// -> O(n²)
//
// O(n) * O(log n)
// -> O(n log n)
//
// =========================================================


// =========================================================
// Exemplos de estruturas conhecidas
// =========================================================
//
// std::vector
//
// acesso por índice:
// O(1)
//
// busca linear:
// O(n)
//
// push_back:
// O(1) amortizado
//
// inserção/remoção no meio:
// O(n)
//
// ---------------------------------------------------------
//
// std::list
//
// acesso por índice:
// não possui acesso direto
//
// percorrer:
// O(n)
//
// inserir/remover quando já temos o iterador:
// O(1)
//
// ---------------------------------------------------------
//
// std::map
//
// busca:
// O(log n)
//
// inserção:
// O(log n)
//
// remoção:
// O(log n)
//
// ---------------------------------------------------------
//
// std::unordered_map
//
// busca:
// O(1) em média
//
// inserção:
// O(1) em média
//
// remoção:
// O(1) em média
//
// pior caso:
// O(n)
//
// ---------------------------------------------------------
//
// std::set
//
// busca:
// O(log n)
//
// ---------------------------------------------------------
//
// std::unordered_set
//
// busca:
// O(1) em média
//
// =========================================================


// =========================================================
// main - demonstração
// =========================================================

int main()
{
    std::vector<int> valores{ 10, 20, 30, 40, 50 };

    std::cout << "O(1) - acesso: "
        << acessar(valores, 2)
        << '\n';

    std::cout << "O(log n) - passos dividindo 1024: "
        << contarDivisoes(1024)
        << '\n';

    std::cout << "O(n) - soma: "
        << somar(valores)
        << '\n';

    std::cout << std::boolalpha;

    std::cout << "Busca linear por 40: "
        << buscaLinear(valores, 40)
        << '\n';

    std::cout << "Busca binaria por 40: "
        << buscaBinaria(valores, 40)
        << '\n';

    std::cout << "O(n log n), n = 10: "
        << linearLogaritmico(10)
        << " operacoes aproximadas\n";

    std::cout << "O(n^2), n = 10: "
        << quadratico(10)
        << " operacoes\n";

    std::cout << "O(n^3), n = 10: "
        << cubico(10)
        << " operacoes\n";

    std::cout << "Fibonacci(10): "
        << fibonacci(10)
        << '\n';

    return 0;
}