#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

// =========================================================
// Hash Tables - Resumo prático em C++20
// =========================================================
//
// Estruturas principais:
//
// std::unordered_map  -> chave -> valor
// std::unordered_set  -> valores únicos
//
// Hash tables usam:
//
// chave
//  ↓
// função hash
//  ↓
// valor numérico
//  ↓
// bucket
//  ↓
// elemento
//
// Busca, inserção e remoção:
//
// média:      O(1)
// pior caso: O(n)
//
// =========================================================


// =========================================================
// Hash com tipo próprio
// =========================================================

struct Position
{
    int x;
    int y;

    bool operator==(const Position& other) const
    {
        return x == other.x && y == other.y;
    }
};

struct PositionHash
{
    std::size_t operator()(const Position& pos) const
    {
        std::size_t hashX = std::hash<int>{}(pos.x);
        std::size_t hashY = std::hash<int>{}(pos.y);

        return hashX ^ (hashY << 1);
    }
};


int main()
{
    // =====================================================
    // unordered_map
    // =====================================================

    std::unordered_map<int, int> vidaInimigos;

    vidaInimigos[101] = 100;
    vidaInimigos[102] = 80;
    vidaInimigos[103] = 150;

    // Atualiza valor
    vidaInimigos[103] = 120;

    // Busca
    auto inimigo = vidaInimigos.find(102);

    if (inimigo != vidaInimigos.end())
    {
        std::cout << "ID: " << inimigo->first
            << " Vida: " << inimigo->second
            << '\n';
    }

    // Verifica chave
    if (vidaInimigos.contains(101))
    {
        std::cout << "Inimigo 101 existe\n";
    }

    // Remove
    vidaInimigos.erase(102);

    // =====================================================
    // unordered_set
    // =====================================================

    std::unordered_set<int> ids;

    ids.insert(10);
    ids.insert(20);
    ids.insert(30);

    // Duplicado não é inserido novamente
    ids.insert(20);

    std::cout << "Quantidade de IDs: "
        << ids.size()
        << '\n';

    // =====================================================
    // Buckets e load factor
    // =====================================================

    std::cout << "Buckets: "
        << vidaInimigos.bucket_count()
        << '\n';

    std::cout << "Load factor: "
        << vidaInimigos.load_factor()
        << '\n';

    // Reserva espaço para aproximadamente 1000 elementos
    vidaInimigos.reserve(1000);

    // =====================================================
    // Tipo próprio como chave
    // =====================================================

    std::unordered_map<Position, std::string, PositionHash> mapa;

    mapa[{10, 20}] = "Floresta";
    mapa[{5, 8}] = "Vila";

    Position pos{ 10, 20 };

    if (mapa.contains(pos))
    {
        std::cout << "Local: "
            << mapa[pos]
            << '\n';
    }

    // =====================================================
    // map vs unordered_map
    // =====================================================
    //
    // std::map
    // - mantém chaves ordenadas
    // - normalmente árvore balanceada
    // - busca: O(log n)
    //
    // std::unordered_map
    // - não garante ordem
    // - usa hash table
    // - busca média: O(1)
    //
    // =====================================================

    return 0;
}