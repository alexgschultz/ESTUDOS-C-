#include <iostream>
#include <memory>// Biblioteca para gerenciamento automático de memória (Smart Pointers).

using namespace std;

class Carro
{
private:
    string nome;
    int ano{ 0 };

public:
    void setAno(int a)
    {
        ano = a;
    }

    int getAno() const
    {
        return ano;
    }
};

int main()
{
    /*
    Smart Pointer

    unique_ptr
        -> Um único dono do objeto.
        -> Não pode ser copiado.
        -> Pode transferir a posse usando std::move().

    shared_ptr
        -> Vários ponteiros compartilham o mesmo objeto.
        -> O objeto é destruído quando o último shared_ptr é destruído.

    weak_ptr
        -> Observa um objeto gerenciado por shared_ptr.
        -> Não aumenta a contagem de donos.
        -> Usa lock() para acessar o objeto com segurança.

    make_unique()
        -> Cria um unique_ptr.

    make_shared()
        -> Cria um shared_ptr.
    */

    //======================================================================================================================
    // unique_ptr
    // Possui um único dono. O objeto é destruído automaticamente.
    //======================================================================================================================

    auto c1 = make_unique<Carro>();

    c1->setAno(2025);

    cout << "Ano: " << c1->getAno() << endl;

    //======================================================================================================================
    // unique_ptr não pode ser copiado.
    //======================================================================================================================

        // auto c2 = c1; // ERRO: unique_ptr nao permite copia.

    //======================================================================================================================
    // move()
    // Transfere a posse do objeto para outro unique_ptr.
    // Após o move(), o ponteiro original não deve mais ser utilizado.
    //======================================================================================================================

    auto c2 = move(c1);

    cout << "Ano c2: " << c2->getAno() << endl;

    //======================================================================================================================
    // unique_ptr com tipos básicos.
    //======================================================================================================================

    auto texto = make_unique<string>("Ola Mundo");

    cout << *texto << endl;
    cout << "Tamanho: " << texto->size() << endl;

    //======================================================================================================================
    // shared_ptr
    // Permite vários donos para o mesmo objeto.
    //======================================================================================================================

    auto p1 = make_shared<Carro>();

    p1->setAno(2030);

    auto p2 = p1;

    cout << "\nAno: " << p2->getAno() << endl;

    cout << "Quantidade de donos: " << p1.use_count() << endl;// use_count() -> Retorna quantos shared_ptr compartilham o mesmo objeto.

    //======================================================================================================================
    // weak_ptr
    // Não participa da contagem de donos.
    //======================================================================================================================

    weak_ptr<Carro> wp = p1;

    cout << "Quantidade de donos: " << p1.use_count() << endl;
    cout << boolalpha;// boolalpha -> Exibe valores booleanos como true e false em vez de 1 e 0.
    cout << "Objeto expirou? " << wp.expired() << endl;

    if (auto temp = wp.lock())// lock() retorna um shared_ptr temporário. Se o objeto já foi destruído, retorna nullptr.
    {
        cout << "Objeto ainda existe." << endl;
        cout << temp->getAno() << endl;
    }

    //======================================================================================================================
    // Quando p1 e p2 saírem do escopo, o objeto será destruído automaticamente.
    //======================================================================================================================

    return 0;
}