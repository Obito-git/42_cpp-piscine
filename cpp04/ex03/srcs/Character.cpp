//
// Created by amyroshn on 5/26/22.
//

#include "Character.hpp"

Character::~Character() {

}

const std::string &Character::getName() const {
	return "";
}

void Character::equip(AMateria *m) {
	bool isAdded = false;
	if (!m)
	{
		std::cout << "I can't use this materia, so strange power... (NULL POINTER)" << std::endl;
		return;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (!inventory[i])
		{
			std::cout << m->getType() << " has been successfully added at slot " << i;
			isAdded = true;
			inventory[i] = m;
			break ;
		}
	if (!isAdded)
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY_SIZE)
		std::cout << "Error, you must to use index from 0 to " << INVENTORY_SIZE - 1 << std::endl;
	else if (!inventory[idx])
		std::cout << idx << "rth inventory slot is empty" << std::endl;
	else
	{
		std::cout << inventory[idx]->getType() << "has been successfully unequipped from " <<  idx << " slot" <<std::endl;
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {


}

Character::Character(const std::string &name) : _name(name) {
}