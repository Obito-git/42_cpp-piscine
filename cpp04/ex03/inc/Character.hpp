//
// Created by amyroshn on 5/26/22.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string _name;
	static const int INVENTORY_SIZE = 4;
	AMateria* inventory[INVENTORY_SIZE];
public:
	Character(const std::string &name);

	virtual ~Character();
	virtual const std::string &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};


#endif //EX03_CHARACTER_HPP
