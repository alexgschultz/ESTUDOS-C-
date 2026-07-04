#include <iostream>
#include <memory>

using namespace std;

class Carro {
public:
	int velMax{ 0 };
	int potencia{ 0 };
	string nome{};

	// Lista de inicialização: Inicializa os atributos antes da execução do corpo do construtor.
	Carro(const string& n, int p) : nome(n), potencia(p) {
		if (potencia < 100) {
			velMax = 120;
		}
		else if (potencia < 200) {
			velMax = 180;
		}
		else {
			velMax = 250;
		}
	}
};

int main()
{
	// unique_ptr<Carro> c1(new Carro{ "Fusca", 150 }); // Forma antiga de criar um unique_ptr
	// unique_ptr<Carro> c1 = make_unique<Carro>("Fusca", 150);// Forma moderna de criar um unique_ptr
	auto c1 = make_unique<Carro>("Fusca", 150);// make_unique() cria um unique_ptr de forma segura. É a forma recomendada em C++ moderno para alocação dinâmica.
	cout << "Nome: " << c1->nome << "  Velocidade Maxima: " << c1->velMax << endl;

	Carro c2{ "Jipe", 200 };// Forma tradicional de criar um objeto
	cout << "Nome: " << c2.nome << "  Velocidade Maxima: " << c2.velMax << endl;


	/*Carro c1{ "Fusca", 150 };
	cout << "Nome: " << c1.nome << "  Velocidade Maxima: " << c1.velMax << endl;*/


	/*Carro* c1 = new Carro("Fusca", 150);
	cout << "Nome: " << c1->nome << "  Velocidade Maxima: " << c1->velMax << endl;

	delete c1;*/

	return 0;
}