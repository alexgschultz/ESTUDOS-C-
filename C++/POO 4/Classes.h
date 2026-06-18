#pragma once
#include <iostream>
#include <string>

class veiculo {
public:
	int vel = 0;
	std::string blind = "N";
	int rodas = 0;
	void settipo(int tp);
	void setVelMax(int km);
	void setarma(int ar);
	void imp();

private:
	int tipo = 0;// 1.Carro  2.Moto  3.Caminhao  4.Tanque
	int VelMax = 0;
	int arma = 0;
};

void veiculo::settipo(int tp) {
	tipo = tp;
}

void veiculo::setVelMax(int km) {
	VelMax = km;
}

void veiculo::setarma(int ar) {
	arma = ar;
}

void veiculo::imp() {
	std::cout << "Tipo do veiculo.....: " << tipo << std::endl;
	std::cout << "Velocidade maxima...: " << VelMax << std::endl;
	std::cout << "Quantidades de rodas: " << rodas << std::endl;
	std::cout << "E blindado..........? " << blind << std::endl;
	std::cout << "Numero de armas.....: " << arma << "\n\n";
}

class moto:public veiculo {
public:
	moto();
};

moto::moto() {
	vel = 0;
	blind = "N";
	rodas = 2;
	settipo(2);
	setVelMax(150);
	setarma(0);
}

class carro:public veiculo {
public:
	carro();
};

carro::carro() {
	vel = 0;
	blind = "N";
	rodas = 4;
	settipo(1);
	setVelMax(300);
	setarma(0);
}

class tanque:public veiculo {
public:
	tanque();
};

tanque::tanque() {
	vel = 0;
	blind = "S";
	rodas = 8;
	settipo(4);
	setVelMax(200);
	setarma(3);
}