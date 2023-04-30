
// pr_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Lamp.h"



Lamp* create(std::string f, int pw, int p) {

	try {
		Lamp *l3 = new Lamp{ f,pw,p };
		return l3;


	}
	catch (std::invalid_argument& error) {
		std::cout << error.what();
		return nullptr;
	}
	catch (std::domain_error& error) {
		std::cout << error.what();
		return nullptr;
	}
	}
Lamp::Lamp(std::string firma, int power, int price)
{
	init(firma, power, price);
}

void Lamp::print() {
	std::cout << _firma << std::endl;
	std::cout << _power << " Вт" << std::endl;
	std::cout << _price << " рублей" << std::endl;
}

Lamp::Lamp(Lamp &l) {
	if (this == &l) return;
	this->_firma = l._firma;
	this->_power = l._power;
	this->_price = l._price;
}
void Lamp::refirm() {
	_firma = "pp";

}


