//
// Created by Anton on 24/05/2022.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H
#include <string>
#include <iostream>

class ClapTrap {
private:
	ClapTrap();
	std::string _name;
	unsigned int _hp;
	unsigned int _energy;
	unsigned int _attack_dmg;
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(const ClapTrap &other);
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &other);
};



#endif //EX00_CLAPTRAP_H
