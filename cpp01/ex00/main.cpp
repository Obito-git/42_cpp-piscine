#include "Zombie.hpp"

int main()
{
	randomChump("inside zombie");
	Zombie *zomb = newZombie("Extern zombie");
	zomb->announce();
	delete zomb;
}