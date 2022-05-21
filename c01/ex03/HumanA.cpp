#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon), _name(name) {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}

const Weapon &HumanA::getWeapon() const {
	return _weapon;
}

void HumanA::setWeapon(const Weapon &weapon) {
	_weapon = weapon;
}

const std::string &HumanA::getName() const {
	return _name;
}

void HumanA::setName(const std::string &name) {
	_name = name;
}
