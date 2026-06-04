#include <iostream>

using namespace std;

// Structs são tipos de dados personalizados que permitem agrupar variáveis relacionadas sob um mesmo nome.
struct Carro
{ // A struct Carro tem quatro membros: marca, simbolo, ano e potencia.
	string marca;
	string simbolo;
	int ano = 0;
	int potencia = 0;
};

int main()
{   // Criamos duas variáveis do tipo Carro, Car1 e Car2, e atribuímos valores a seus membros.
	Carro Car1;
	Carro Car2;

	// Atribuição de valores aos membros de Car1 e Car2.
	Car1.marca = "Ferrary";
	Car1.simbolo = "Cavalo";
	Car1.ano = 2026;
	Car1.potencia = 640;

	Car2.marca = "Lamborguini";
	Car2.simbolo = "Touro";
	Car2.ano = 2026;
	Car2.potencia = 730;

	cout << "Marca...: " << Car1.marca << endl;
	cout << "Simbolo.: " << Car1.simbolo << endl;
	cout << "Ano.....: " << Car1.ano << endl;
	cout << "Potencia: " << Car1.potencia << " cv" << "\n\n";

	cout << "Marca...: " << Car2.marca << endl;
	cout << "Simbolo.: " << Car2.simbolo << endl;
	cout << "Ano.....: " << Car2.ano << endl;
	cout << "Potencia: " << Car2.potencia << " cv" << "\n\n";

    return 0;
}