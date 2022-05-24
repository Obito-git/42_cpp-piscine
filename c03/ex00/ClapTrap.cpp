//
// Created by Anton on 24/05/2022.
//

#include "ClapTrap.hpp"
/*
 *
 *          CONSTRUCTORS
 *
 */
ClapTrap::ClapTrap() {
	_name = "noname";
	_hp = 10;
	_energy = 10;
	_attack_dmg = 0;
	std::cout << "Calling ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_attack_dmg = other._energy;
	std::cout << "Calling ClapTrap copy constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name) {
	_hp = 10;
	_energy = 10;
	_attack_dmg = 0;
	std::cout << "Calling ClapTrap name param constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Calling ClapTrap destructor" << std::endl;
}

/*
 *
 *          FUNCTIONS
 *
 */

void ClapTrap::attack(const std::string &target) {
	if (_energy > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!"
		          << std::endl;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << _name << " dont have enough energy to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hp > 0) {
		std::cout << "ClapTrap " << _name << " got " << amount << " damage!" << std::endl;
		amount > _hp ? _hp = 0 : _hp -= amount;
		if (_hp == 0)
			std::cout << "ClapTrap " << _name << " is dead! R.I.P" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy > 0) {
		std::cout << "ClapTrap " << _name << " got " << amount << " hit point(s)" << std::endl;
		_hp += amount;
		_energy--;
	}
	else
		std::cout << "ClapTrap " << _name << " dont have enough energy to repair itself" << std::endl;
}

/*
 *
 *              OPERATORS
 *
 */
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_attack_dmg = other._attack_dmg;
	return (*this);
}







