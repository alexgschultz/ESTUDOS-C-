#include <iostream>

using namespace std;

/*
    Sobrecarga (Overloading)

    Construtores
        -> Carro()
        -> Carro(int, string)

    Métodos
        -> acelerar()
        -> acelerar(int)
        -> acelerar(int, bool)

    Mesmo nome.
    Parâmetros diferentes.
    O compilador escolhe qual função chamar.
*/

class Carro {
private:
    int velMax{ 0 };
    string nome;
    int potencia{ 0 };

public:
    int getVelMax() const {
        return velMax;
    }
    const string& getNome() const {
        return nome;
    }
    int getPotencia() const {
        return potencia;
    }

//======================================================================================================================
// Sobrecarga de construtores
// Mesmo nome (Carro), parâmetros diferentes.
//======================================================================================================================
    Carro() : velMax(150), nome("Popular"), potencia(100) {
    }

    Carro(int pt, const string& no) : potencia(pt), nome(no) {
        if (potencia < 100) {
            velMax = 100;
        }
        else if (potencia < 200) {
			velMax = 200;
		}
        else {
            velMax = 300;
        }
    }
    // Fim de sobrecarga de construtores.
    
//======================================================================================================================
// Sobrecarga de métodos
//======================================================================================================================
    void acelerar()
    {
        velMax += 10;
    }

    void acelerar(int incremento)
    {
        velMax += incremento;
    }

    void acelerar(int incremento, bool turbo)
    {
        if (turbo)
            velMax += incremento * 2;
        else
            velMax += incremento;
    }
	// fim de sobrecarga de métodos
};

int main()
{   
    Carro c1;
	cout << "Carro 1..........: " << c1.getNome() << endl;
	cout << "Potencia.........: " << c1.getPotencia() << endl;
	cout << "Velocidade Maxima: " << c1.getVelMax() << "\n\n";

    Carro c2{ 150, "Esportivo" };
    cout << "Carro 2..........: " << c2.getNome() << endl;
    cout << "Potencia.........: " << c2.getPotencia() << endl;
    cout << "Velocidade Maxima: " << c2.getVelMax() << "\n\n";

    cout << "\nVelocidade inicial: " << c2.getVelMax() << endl;
    c2.acelerar();
    cout << "acelerar(): " << c2.getVelMax() << endl;

    c2.acelerar(20);
    cout << "acelerar(20): " << c2.getVelMax() << endl;

    c2.acelerar(30, true);
    cout << "acelerar(30, true): " << c2.getVelMax() << endl;

    return 0;
}