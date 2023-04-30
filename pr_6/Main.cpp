#include <iostream>
#include <Windows.h>
#include "Lamp.h"
#include <ctime>


int main() {
	   SetConsoleCP (1251);
	   SetConsoleOutputCP(1251);

	   int pw, p, c = 0;
	   std::string f;
	   Lamp* ln;
	   
	try {
		Lamp l1, l2{ "nn",100,2000 };
		l1.print();
		l2.print();
		Lamp l3{ l2 };
		l3.print();
		l1.refirm();
		l1.print();
		while (c < 2) {
			puts("---введите фирму лампочки---");
			std::cin >> f;
			puts("---введите мощность лампочки---");
			std::cin >> pw;
			puts("---введите цену лампочки---");
			std::cin >> p;
			ln = create(f, pw, p);
			(*ln).print();
			delete ln;
			c++;

		}
	}
	catch (std::invalid_argument& error) {
		std::cout << error.what();
	}
	catch (std::domain_error& error) {
		std::cout << error.what();
	}
	
}