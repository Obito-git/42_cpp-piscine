#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->_name << " is dead" << std::endl;
}

void Zombie::setName(const std::string &name) {
	_name = name;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}







