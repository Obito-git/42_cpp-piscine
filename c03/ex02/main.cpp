//
// Created by Anton on 24/05/2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap c_of_c("child of child");

	std::cout << std::endl << std::endl;

	c_of_c.attack("child of child target");

	std::cout << std::endl << std::endl;

	c_of_c.beRepaired(100);
	c_of_c.takeDamage(100);
	//c_of_c.guardGate(); can't heritate ScavTrap func
	c_of_c.highFivesGuys();

	std::cout << std::endl << std::endl;
}
