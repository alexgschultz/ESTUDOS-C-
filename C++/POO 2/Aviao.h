#pragma once
#include <iostream>
#include <string>

class Aviao {
public:
	std::string Tipo;
	int VelMax = 0;

	Aviao(int tp);
	void imprimir();
};

Aviao::Aviao(int tp) {
	if (tp == 1) {
		Tipo = "Jato";
		VelMax = 1000;
	}
	else if (tp == 2) {
		Tipo = "Monomotor";
		VelMax = 480;
	}
	else {
		Tipo = "Planador";
		VelMax = 160;
	}
}

void Aviao::imprimir() {
	std::cout << "Nome......: " << Tipo << std::endl;
	std::cout << "Velocidade: " << VelMax << "\n\n";
}