//
// Created by Anton on 24/05/2022.
//

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	ClapTrap bob2("Bob2");
	std::cout << std::endl << std::endl;

	bob.attack("Enemy");
	bob.takeDamage(100);
	bob.beRepaired(10);

	std::cout << std::endl << std::endl;

	for (int i = 0; i < 9; i++)
		bob.attack("new enemy");
	bob.takeDamage(10);

	std::cout << std::endl << std::endl;

	bob2 = bob;
	bob2.beRepaired(1000);
	std::cout << std::endl << std::endl;

}
