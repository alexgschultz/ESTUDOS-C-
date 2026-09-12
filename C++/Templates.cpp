#include <concepts>
#include <iostream>
#include <string>
#include <utility>

// =========================================================
// 1. Função template
// =========================================================

template<typename T>
T maior(T a, T b)
{
    return (a > b) ? a : b;
}

// =========================================================
// 2. Template com tipos diferentes
// =========================================================

template<typename T, typename U>
auto somar(T a, U b)
{
    return a + b;
}

// =========================================================
// 3. Classe template
// =========================================================

template<typename T>
class Caixa
{
public:
    void setValor(const T& novoValor)
    {
        valor = novoValor;
    }

    const T& getValor() const
    {
        return valor;
    }

private:
    T valor{};
};

// =========================================================
// 4. Classe template com dois tipos
// =========================================================

template<typename T, typename U>
class Par
{
public:
    T primeiro{};
    U segundo{};
};

// =========================================================
// 5. Tipos padrão
// =========================================================

template<typename T = int, typename U = double>
class Valores
{
public:
    T primeiro{};
    U segundo{};
};

// =========================================================
// 6. Parâmetro de valor em tempo de compilação
// =========================================================

template<typename T, std::size_t N>
class Buffer
{
public:
    T dados[N]{};
};

// =========================================================
// 7. Especialização de template
// =========================================================

template<typename T>
class Tipo
{
public:
    void mostrar() const
    {
        std::cout << "Tipo generico\n";
    }
};

template<>
class Tipo<std::string>
{
public:
    void mostrar() const
    {
        std::cout << "Tipo std::string\n";
    }
};

// =========================================================
// 8. Especialização parcial
// =========================================================

template<typename T, typename U>
class Registro
{
public:
    void mostrar() const
    {
        std::cout << "Registro generico\n";
    }
};

template<typename T>
class Registro<T, int>
{
public:
    void mostrar() const
    {
        std::cout << "Segundo tipo e int\n";
    }
};

// =========================================================
// 9. Concept
// =========================================================

template<std::integral T>
T dobro(T valor)
{
    return valor * 2;
}

// =========================================================
// 10. Template variadico + fold expression
// =========================================================

template<typename... Args>
auto somarTodos(Args... args)
{
    return (args + ...);
}

template<typename... Args>
auto multiplicarTodos(Args... args)
{
    return (args * ...);
}

// =========================================================
// Testes
// =========================================================

int main()
{
    // Função template
    std::cout << "Maior: " << maior(10, 20) << '\n';
    std::cout << "Maior double: " << maior(2.5, 7.5) << '\n';

    // Tipo explícito
    std::cout << "Maior<int>: " << maior<int>(10.5, 20.8) << '\n';

    // Tipos diferentes
    std::cout << "Soma: " << somar(10, 2.5) << '\n';

    // Classe template
    Caixa<std::string> caixa;
    caixa.setValor("Template");
    std::cout << "Caixa: " << caixa.getValor() << '\n';

    // Dois tipos
    Par<int, std::string> par;
    par.primeiro = 10;
    par.segundo = "Player";

    std::cout << "Par: " << par.primeiro << ", " << par.segundo << '\n';

    // Tipos padrão
    Valores<> valores;
    valores.primeiro = 10;
    valores.segundo = 2.5;

    // Parâmetro de valor
    Buffer<int, 5> buffer;
    buffer.dados[0] = 100;

    std::cout << "Buffer[0]: " << buffer.dados[0] << '\n';

    // Especialização
    Tipo<int> tipoInt;
    Tipo<std::string> tipoString;

    tipoInt.mostrar();
    tipoString.mostrar();

    // Especialização parcial
    Registro<std::string, double> registro1;
    Registro<std::string, int> registro2;

    registro1.mostrar();
    registro2.mostrar();

    // Concept
    std::cout << "Dobro: " << dobro(10) << '\n';

    // Variadic templates
    std::cout << "Somar todos: " << somarTodos(10, 20, 30) << '\n';
    std::cout << "Multiplicar todos: " << multiplicarTodos(2, 3, 4) << '\n';

    return 0;
}