//
// Created by amyroshn on 5/21/22.
//

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG << std::endl << std::endl;
	Harl::info();
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO << std::endl << std::endl;
	Harl::warning();
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING << std::endl << WARNING2 << std::endl << std::endl;
	Harl::error();
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR << std::endl;
}

Harl::Level Harl::get_level(std::string msg) {
	std::string arr[] = {"DEBUG", "WARNING", "ERROR", "INFO"};
	for (int i = 0; i < MAX_LVL; i++)
		if (msg == arr[i])
			return Harl::Level(i);
	return Harl::default_o;
}

void Harl::default_msg(void) {
	std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
}
