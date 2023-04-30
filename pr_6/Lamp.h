#pragma once
class Lamp {
private:
	std::string _firma;
	int _power;
	int _price;
	void init(std::string firma, int power, int price) {
		if (firma == "") throw std::invalid_argument("�� ������ �����");
		if (power < 0) throw std::domain_error("�������� ������ �������");
		if (price < 0) throw std::domain_error("���� ������ �������");
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


