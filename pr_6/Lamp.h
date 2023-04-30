#pragma once
class Lamp {
private:
	std::string _firma;
	int _power;
	int _price;
	void init(std::string firma, int power, int price) {
		if (firma == "") throw std::invalid_argument("Не задана фирма");
		if (power < 0) throw std::domain_error("Мощность задана неверно");
		if (price < 0) throw std::domain_error("Цена задана неверно");
		_firma = firma;
		_power = power;
		_price = price;
	}
public:
	Lamp(std::string firma = "0", int power = 0, int price = 0);
	Lamp(Lamp& l);
	void print();
	void refirm();


};
Lamp* create(std::string f, int pw, int p);


