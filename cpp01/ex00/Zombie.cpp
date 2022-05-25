#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name) {}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is dead" << std::endl;
}





