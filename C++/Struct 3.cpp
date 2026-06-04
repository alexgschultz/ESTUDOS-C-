#include <iostream>

using namespace std;

struct Carro
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
{   // Criando um array de carros
	Carro *carros = new Carro[5];

	// Criando 5 carros e inserindo os dados
	Carro car1, car2, car3, car4, car5;

	// Atribuindo os carros ao array
	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	carros[4] = car5;

	// Inserindo os dados dos carros
	carros[0].insere("Toyota", "Corolla", 2020, 180);
	carros[1].insere("Honda", "Civic", 2019, 110);
	carros[2].insere("Ford", "Focus", 2021, 130);
	carros[3].insere("Volkswagen", "Golf", 2020, 140);
	carros[4].insere("BMW", "X3", 2021, 180);

	// Mostrando os dados dos carros
	for (int i = 0; i < 5; i++)
	{
		carros[i].mostrar();
	}

	return 0;
}