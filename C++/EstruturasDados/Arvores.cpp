#include <iostream>
#include <memory>

// =========================================================
// Árvores - Resumo prático em C++20
// =========================================================
//
// Conceitos:
//
// root       -> raiz
// parent     -> pai
// child      -> filho
// leaf       -> folha
// height     -> altura
//
// BST:
//
// menor -> esquerda
// maior -> direita
//
// BST balanceada:
//
// busca próxima de O(log n)
//
// BST desequilibrada:
//
// pior caso O(n)
//
// =========================================================


struct Node
{
    int valor;

    std::unique_ptr<Node> esquerda;
    std::unique_ptr<Node> direita;

    explicit Node(int valor)
        : valor(valor)
    {
    }
};


// =========================================================
// Inserção em BST
// =========================================================

void inserir(std::unique_ptr<Node>& node, int valor)
{
    if (!node)
    {
        node = std::make_unique<Node>(valor);
        return;
    }

    if (valor < node->valor)
    {
        inserir(node->esquerda, valor);
        return;
    }

    if (valor > node->valor)
    {
        inserir(node->direita, valor);
    }
}


// =========================================================
// Busca em BST
// =========================================================

bool contem(const Node* node, int alvo)
{
    if (node == nullptr)
    {
        return false;
    }

    if (node->valor == alvo)
    {
        return true;
    }

    if (alvo < node->valor)
    {
        return contem(node->esquerda.get(), alvo);
    }

    return contem(node->direita.get(), alvo);
}


// =========================================================
// Percurso in-order
// esquerda -> raiz -> direita
//
// Em uma BST, produz valores ordenados.
// =========================================================

void inOrder(const Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    inOrder(node->esquerda.get());

    std::cout << node->valor << ' ';

    inOrder(node->direita.get());
}


// =========================================================
// Percurso pre-order
// raiz -> esquerda -> direita
// =========================================================

void preOrder(const Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    std::cout << node->valor << ' ';

    preOrder(node->esquerda.get());
    preOrder(node->direita.get());
}


// =========================================================
// Percurso post-order
// esquerda -> direita -> raiz
// =========================================================

void postOrder(const Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    postOrder(node->esquerda.get());
    postOrder(node->direita.get());

    std::cout << node->valor << ' ';
}


int main()
{
    std::unique_ptr<Node> raiz;

    inserir(raiz, 40);
    inserir(raiz, 20);
    inserir(raiz, 60);
    inserir(raiz, 10);
    inserir(raiz, 30);
    inserir(raiz, 50);
    inserir(raiz, 70);

    /*
            40
           /  \
         20    60
        / \    / \
       10 30  50 70
    */

    std::cout << std::boolalpha;

    std::cout << "Existe 50: "
        << contem(raiz.get(), 50)
        << '\n';

    std::cout << "Existe 90: "
        << contem(raiz.get(), 90)
        << '\n';

    std::cout << "In-order: ";
    inOrder(raiz.get());
    std::cout << '\n';

    std::cout << "Pre-order: ";
    preOrder(raiz.get());
    std::cout << '\n';

    std::cout << "Post-order: ";
    postOrder(raiz.get());
    std::cout << '\n';

    // =====================================================
    // Remoção em BST - conceitos
    // =====================================================
    //
    // Caso 1:
    // nó sem filhos
    // -> remove diretamente
    //
    // Caso 2:
    // nó com um filho
    // -> filho ocupa sua posição
    //
    // Caso 3:
    // nó com dois filhos
    // -> pode usar sucessor:
    //    menor elemento da subárvore direita
    //
    // ou predecessor:
    //    maior elemento da subárvore esquerda
    //
    // =====================================================

    // =====================================================
    // Árvores balanceadas
    // =====================================================
    //
    // BST comum pode ficar:
    //
    // 10
    //   \
    //    20
    //      \
    //       30
    //
    // Nesse caso, busca pode chegar a O(n).
    //
    // Árvores balanceadas tentam manter:
    //
    // O(log n)
    //
    // Exemplos:
    //
    // AVL Tree
    // Red-Black Tree
    //
    // std::map e std::set normalmente são implementados
    // usando árvores balanceadas, como Red-Black Tree.
    //
    // =====================================================

    return 0;
}