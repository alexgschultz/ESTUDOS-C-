#include <iostream>

using namespace std;

//======================================================================================================================
// Classe base
// Contém atributos e métodos comuns a todos os veículos.
//======================================================================================================================

class Veiculo {
private:
    string nome;
    int ano{ 0 };
    string cor;

public:
    int rodas{ 0 };
    int velMax{ 0 };

    // Setters: alteram os atributos privados.
    void setNome(const string& n) {
        nome = n;
    }

    // Getters: permitem acesso aos atributos privados.
    const string& getNome() const {
        return nome;
    }

    void setAno(int a) {
        ano = a;
    }

    int getAno() const {
        return ano;
    }

    void setCor(const string& c) {
        cor = c;
    }

    const string& getCor() const {
        return cor;
    }

    // virtual: permite que classes derivadas substituam este método.
    virtual void imp() const {
        cout << "Nome.............: " << nome << endl;
        cout << "Ano..............: " << ano << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Rodas............: " << rodas << endl;
        cout << "Velocidade Maxima: " << velMax << "\n\n";
    }
};

//======================================================================================================================
// Herança
// Carro herda todos os membros públicos da classe Veiculo.
//======================================================================================================================

class Carro : public Veiculo {
public:
    Carro() {
        setNome("Ferrari");
        setAno(2009);
        setCor("Vermelho");
        rodas = 4;
        velMax = 300;
    }
};

//======================================================================================================================
// Outra classe derivada.
//======================================================================================================================

class Moto : public Veiculo {
public:
    Moto() {
        setNome("Honda");
        setAno(2015);
        setCor("Preta");
        rodas = 2;
        velMax = 200;
    }
};

//======================================================================================================================
// Classe derivada com novos atributos e sobrescrita do método imp().
//======================================================================================================================

class Militar : public Veiculo {
public:
    int municao{ 0 };
    bool armamento{ false };

    // Lista de inicialização: inicializa os atributos antes da execução do construtor.
    Militar(bool arma, int m)
        : armamento(arma), municao(arma ? m : 0) {

        setNome("Tanque");
        setAno(2020);
        setCor("Cinza");

        rodas = 8;
        velMax = 150;
    }

    // override: substitui a implementação virtual da classe base.
    void imp() const override {
        cout << "Nome.............: " << getNome() << endl;
        cout << "Ano..............: " << getAno() << endl;
        cout << "Cor..............: " << getCor() << endl;
        cout << "Rodas............: " << rodas << endl;
        cout << "Velocidade Maxima: " << velMax << endl;
        cout << "Armas............: " << armamento << endl;
        cout << "Municao..........: " << municao << "\n\n";
    }
};

int main()
{ /*
    POO - Herança / Virtual / Override

    Herança
        -> Permite reutilizar atributos e métodos de outra classe.

    public
        -> Mantém os membros públicos da classe base acessíveis.

    virtual
        -> Permite que uma função seja sobrescrita pelas classes derivadas.

    override
        -> Indica que a função substitui uma função virtual da classe base.

    Lista de inicialização
        -> Inicializa atributos antes da execução do construtor.
*/


    // Criação dos objetos.
    Carro carro;
    Moto moto;
    Militar tanque(true, 100);
    Militar tanque2(false, 100);

    // Chamada do método de impressão de cada objeto.
    carro.imp();
    moto.imp();
    tanque.imp();
    tanque2.imp();

    return 0;
}