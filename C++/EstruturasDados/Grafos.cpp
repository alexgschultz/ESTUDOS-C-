#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// =========================================================
// Grafos - Resumo prático em C++20
// =========================================================
//
// Grafo:
//
// vértices -> elementos
// arestas  -> conexões
//
// Tipos:
//
// direcionado
// não direcionado
//
// com peso
// sem peso
//
// Representações:
//
// lista de adjacência
// matriz de adjacência
//
// Percursos:
//
// DFS -> profundidade
// BFS -> largura
//
// =========================================================


// =========================================================
// Lista de adjacência
// =========================================================

using Grafo =
std::unordered_map<std::string, std::vector<std::string>>;


// =========================================================
// DFS - Depth-First Search
//
// Usa recursão ou stack.
//
// Complexidade:
// O(V + E)
//
// V = vértices
// E = arestas
// =========================================================

void dfs(
    const Grafo& grafo,
    const std::string& atual,
    std::unordered_set<std::string>& visitados)
{
    if (visitados.contains(atual))
    {
        return;
    }

    visitados.insert(atual);

    std::cout << atual << ' ';

    auto it = grafo.find(atual);

    if (it == grafo.end())
    {
        return;
    }

    for (const auto& vizinho : it->second)
    {
        dfs(grafo, vizinho, visitados);
    }
}


// =========================================================
// BFS - Breadth-First Search
//
// Usa queue.
//
// Em grafos sem pesos, pode encontrar caminho com
// menor número de arestas.
//
// Complexidade:
// O(V + E)
// =========================================================

void bfs(
    const Grafo& grafo,
    const std::string& inicio)
{
    std::queue<std::string> fila;
    std::unordered_set<std::string> visitados;

    fila.push(inicio);
    visitados.insert(inicio);

    while (!fila.empty())
    {
        std::string atual = fila.front();
        fila.pop();

        std::cout << atual << ' ';

        auto it = grafo.find(atual);

        if (it == grafo.end())
        {
            continue;
        }

        for (const auto& vizinho : it->second)
        {
            if (visitados.contains(vizinho))
            {
                continue;
            }

            visitados.insert(vizinho);
            fila.push(vizinho);
        }
    }
}


int main()
{
    // =====================================================
    // Grafo não direcionado
    // =====================================================

    Grafo grafo;

    grafo["A"] = { "B", "C" };
    grafo["B"] = { "A", "D" };
    grafo["C"] = { "A", "D" };
    grafo["D"] = { "B", "C" };

    /*
        A ----- B
        |       |
        |       |
        C ----- D
    */

    std::unordered_set<std::string> visitados;

    std::cout << "DFS: ";
    dfs(grafo, "A", visitados);
    std::cout << '\n';

    std::cout << "BFS: ";
    bfs(grafo, "A");
    std::cout << '\n';

    // =====================================================
    // Matriz de adjacência
    // =====================================================

    std::vector<std::vector<int>> matriz
    {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    // índices:
    //
    // 0 -> A
    // 1 -> B
    // 2 -> C
    // 3 -> D

    if (matriz[0][1] == 1)
    {
        std::cout << "A esta conectado a B\n";
    }

    // =====================================================
    // Lista vs matriz de adjacência
    // =====================================================
    //
    // Lista:
    //
    // boa para grafos esparsos
    // guarda apenas conexões existentes
    //
    // memória:
    // O(V + E)
    //
    // -----------------------------------------------------
    //
    // Matriz:
    //
    // boa quando existem muitas conexões
    // ou consulta direta entre dois nós é importante
    //
    // verificar A -> B:
    // O(1)
    //
    // memória:
    // O(V²)
    //
    // =====================================================

    // =====================================================
    // DFS
    // =====================================================
    //
    // profundidade
    //
    // usa:
    // recursão ou stack
    //
    // útil para:
    //
    // exploração
    // detecção de componentes
    // árvores
    // caminhos
    //
    // =====================================================

    // =====================================================
    // BFS
    // =====================================================
    //
    // largura
    //
    // usa:
    // queue
    //
    // útil para:
    //
    // menor caminho em grafo sem pesos
    // exploração por camadas
    //
    // =====================================================

    // =====================================================
    // Dijkstra
    // =====================================================
    //
    // encontra caminho de menor custo
    //
    // usado quando:
    //
    // arestas possuem pesos não negativos
    //
    // normalmente utiliza:
    //
    // std::priority_queue
    //
    // =====================================================

    // =====================================================
    // A*
    // =====================================================
    //
    // muito usado em pathfinding.
    //
    // prioridade:
    //
    // f(n) = g(n) + h(n)
    //
    // g(n):
    // custo real já percorrido
    //
    // h(n):
    // estimativa até o destino
    //
    // A* usa uma heurística para direcionar melhor
    // a busca até o objetivo.
    //
    // =====================================================

    return 0;
}