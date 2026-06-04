#include <iostream>

using namespace std;

struct carro
{
	string marca;
	string modelo;
	int ano = 0;
	int velocidade = 0;
	int vel = 0;

	// Método para inserir os dados do carro
	void insere(string m, string mod, int a, int v)
	{
		marca = m;
		modelo = mod;
		ano = a;
		velocidade = v;
		vel;
	}

	// Método para mostrar os dados do carro
	void mostrar()
	{
		cout << "\nMarca.....: " << marca << endl;
		cout << "Modelo....: " << modelo << endl;
		cout << "Ano.......: " << ano << endl;
		cout << "Velocidade: " << velocidade << " km/h" << endl;
		cout << "Vel atual.: " << vel << " km/h" << "\n\n";
	}

	// Método para alterar a velocidade do carro
	void mudavel(int nova)
	{
		vel = nova;
		if (vel > velocidade)
		{
			vel = velocidade;
		}
		if (vel < 0)
		{
			vel = 0;
		}
	}
};

int main()
{   // Criando três objetos do tipo carro
	carro car1, car2, car3;

	// Inserindo dados para cada carro
	car1.insere("Toyota", "Corolla", 2020, 120);
	car2.insere("Honda", "Civic", 2019, 110);
	car3.insere("Ford", "Focus", 2021, 130);

	// Mostrando os dados dos carros
	car1.mudavel(150);
	car1.mostrar();
	car2.mostrar();
	car3.mostrar();

    return 0;
}