#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"
class HumanA{
public:
	HumanA(const std::string &name, const Weapon &weapon);
	void attack();
private:
public:
	const Weapon &getWeapon() const;

	void setWeapon(const Weapon &weapon);

	const std::string &getName() const;

	void setName(const std::string &name);

private:
	Weapon _weapon;
	std::string _name;
};
#endif
