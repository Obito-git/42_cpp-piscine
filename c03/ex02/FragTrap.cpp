//
// Created by amyroshn on 5/24/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Calling FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	_name = name;
	std::cout << "Calling FragTrap name param constructor" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Calling FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << _name << " proposise you yo high fives" << std::endl;
}
