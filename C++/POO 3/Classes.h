#pragma once
#include <string>

class Veiculo {
public:
	int Vel = 0;
	int Tipo = 0;
	Veiculo(int tp);
	int getVelMax();
	bool getLigado();
	void setLigado(bool ligado);

private:
	std::string Nome;
	int VelMax = 0;
	bool Ligado = false;
	void setVelMax(int km);
};

int Veiculo::getVelMax() {
	return VelMax;
}

void Veiculo::setVelMax(int km) {
	VelMax = km;
}

bool Veiculo::getLigado() {
	return Ligado;
}

void Veiculo::setLigado(bool ligado) {
	if (ligado == 1) {
		Ligado = true;
	}
	else {
		Ligado = false;
	}
}

Veiculo::Veiculo(int tp) {// 1.Carro  2.Moto  3.Patinete
	Tipo = tp;

	if (Tipo == 1) {
		Nome = "Carro";
		setVelMax(300);
	}
	else if (Tipo == 2) {
		Nome = "Moto";
		setVelMax(150);
	}
	else {
		Nome = "Patinete";
		setVelMax(20);
	}
}