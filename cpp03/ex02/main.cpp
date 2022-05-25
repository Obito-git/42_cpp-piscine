//
// Created by Anton on 24/05/2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap second("second child");

	std::cout << std::endl << std::endl;

	second.attack("test target");

	std::cout << std::endl << std::endl;

	second.beRepaired(100);
	second.takeDamage(100);
	//second.guardGate(); can't heritate ScavTrap func
	second.highFivesGuys();

	std::cout << std::endl << std::endl;
}
