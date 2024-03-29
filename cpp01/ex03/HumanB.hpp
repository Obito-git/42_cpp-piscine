#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"
class HumanB{
public:
	HumanB(const std::string &name);
	void attack();
	void setWeapon(Weapon &weapon);
	const std::string &getName() const;
	void setName(const std::string &name);
private:
	Weapon *_weapon;
	std::string _name;
};
#endif
