//
// Created by Anton on 24/05/2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap parent("Parent");
	ScavTrap child("Child");
	std::cout << std::endl << std::endl;

	parent.attack("parent Enemy");
	child.attack("child Enemy");

	std::cout << std::endl << std::endl;

	child.beRepaired(100);
	child.takeDamage(100);
	child.guardGate();

	std::cout << std::endl << std::endl;
}
