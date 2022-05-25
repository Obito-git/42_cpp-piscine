//
// Created by amyroshn on 5/24/22.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	virtual ~ScavTrap();
	virtual void attack(const std::string &target);
	void guardGate();
};


#endif //EX01_SCAVTRAP_HPP
