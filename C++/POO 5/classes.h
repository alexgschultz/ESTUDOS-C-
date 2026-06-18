#pragma once
#include <iostream>

class Base1 {
public:
	void impBase1();
};

void Base1::impBase1() {
	std::cout << "Iprimir Classe Base1" << std::endl;
}

class Base2 {
public:
	void impBase2();
};

void Base2::impBase2() {
	std::cout << "Iprimir Classe Base2" << std::endl;
}

class CFB:public Base1, public Base2 {

};