#include <iostream>
#include <memory>

using namespace std;

class Carro {
private:
	int velMax{ 0 };
	int potencia{ 0 };
	string nome{};

	void setVelMax(int vm) {
		velMax = vm;
	}

public:
	int getVelMax() const {
		return velMax;
	}

	const string& getNome() const
	{
		return nome;
	}

	int getPotencia() const
	{
		return potencia;
	}

	// Lista de inicialização:
	// Inicializa os membros antes da execução do corpo do construtor.
	Carro(const string& n, int p) : nome(n), potencia(p) {
		if (potencia < 100) {
			//velMax = 120; Acesso direto ao atributo privado, pois estamos dentro da classe
			setVelMax(120);
		}
		else if (potencia < 200) {
			//velMax = 180;
			setVelMax(180);
		}
		else {
			//velMax = 250;
			setVelMax(250);
		}
	}
};

int main()
{
	auto c1 = make_unique<Carro>("Fusca", 150);// make_unique() cria um unique_ptr de forma segura. É a forma recomendada em C++ moderno para alocação dinâmica.
	cout << "Nome: " << c1->getNome() << "  Velocidade Maxima: " << c1->getVelMax() << endl;

	Carro c2{ "Jipe", 200 };// Forma tradicional de criar um objeto.
	cout << "Nome: " << c2.getNome() << "  Velocidade Maxima: " << c2.getVelMax() << endl;

	return 0;
}