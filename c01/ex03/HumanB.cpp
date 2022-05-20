#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) :_name(name) {}

void HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}

const Weapon &HumanB::getWeapon() const {
	return _weapon;
}

void HumanB::setWeapon(const Weapon &weapon) {
	_weapon = weapon;
}

const std::string &HumanB::getName() const {
	return _name;
}

void HumanB::setName(const std::string &name) {
	_name = name;
}
