//
// Created by amyroshn on 5/24/22.
//

#include "ScavTrap.hpp"
/*
 *              CONSTRUCTORS
 */
ScavTrap::ScavTrap() {
	_name = "noname";
	_hp = 100;
	_energy = 50;
	_attack_dmg = 20;
	std::cout << "Calling ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) {
	_name = name;
	_hp = 100;
	_energy = 50;
	_attack_dmg = 20;
	std::cout << "Calling ScavTrap name param constructor" << std::endl;
}

/*
 *
 *              FUNCTIONS
 *
 */
void ScavTrap::attack(const std::string &target) {
	if (_energy > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!"
		          << std::endl;
		_energy--;
	}
	else
		std::cout << "ScavTrap " << _name << " dont have enough energy to attack " << target << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Calling ScavTrap destructor" << std::endl;
}





