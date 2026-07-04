#include <iostream>

using namespace std;

/*
Modificadores de acesso

public
    -> Pode ser acessado de qualquer lugar.

protected
    -> Pode ser acessado pela própria classe e pelas classes derivadas.

private
    -> Pode ser acessado somente pela própria classe.
*/
//======================================================================================================================
// Classe base
// Demonstra os três níveis de acesso.
//======================================================================================================================

class Veiculo {
private:
    string chassi; // Somente a própria classe acessa.

protected:
    int velocidade{ 0 }; // A classe derivada pode acessar.

public:
    string nome; // Qualquer código pode acessar.

    Veiculo(const string& n, int v, const string& c) : nome(n), velocidade(v), chassi(c) {
    }

    void setVelocidade(int v) {
        velocidade = v;
    }

    int getVelocidade() const {
        return velocidade;
    }

    const string& getChassi() const {
        return chassi;
    }
};

//======================================================================================================================
// Classe derivada
// Pode acessar membros public e protected da classe base.
//======================================================================================================================

class Carro : public Veiculo {
public:
    Carro() : Veiculo("Ferrari", 300, "ABC-12345")// Chama o construtor da classe base.
    {
        // public -> OK
        cout << "Nome: " << nome << endl;

        // protected -> OK
        cout << "Velocidade: " << velocidade << endl;

        // private -> ERRO
        // cout << chassi << endl;
    }

    void acelerar()
    {
        velocidade += 20; // protected pode ser alterado.
    }
};

int main()
{//======================================================================================================================
 // Testando os níveis de acesso.
 //======================================================================================================================

    Carro carro;

    cout << "\n--- Acesso pelo main ---\n";

    // public -> OK
    cout << carro.nome << endl;

    // protected -> ERRO
    // cout << carro.velocidade << endl;

    // private -> ERRO
    // cout << carro.chassi << endl;

    // private e protected devem ser acessados através dos métodos públicos.
    cout << carro.getVelocidade() << endl;
    cout << carro.getChassi() << endl;

    carro.acelerar();

    cout << "Nova velocidade: " << carro.getVelocidade() << endl;

    return 0;
}