//
// Created by Anton on 24/05/2022.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H
#include <string>

class ClapTrap {
private:
	std::string _name;
	unsigned int _hp;
	unsigned int _energy;
	unsigned int _attack_dmg;
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap();
};



#endif //EX00_CLAPTRAP_H
