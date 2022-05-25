//
// Created by amyroshn on 5/21/22.
//

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << DEBUG << std::endl;
}

void Harl::info(void) {
	std::cout << INFO << std::endl;
}

void Harl::warning(void) {
	std::cout << WARNING << std::endl;
}

void Harl::error(void) {
	std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level) {
	std::string arr[] = {"DEBUG", "WARNING", "ERROR", "INFO"};
	func farr[] = {&Harl::debug, &Harl::warning, &Harl::error, &Harl::info};
	for (int i = 0; i < MAX_LVL; i++)
		if (level == arr[i])
			(this->*farr[i])();
}
