//
// Created by amyroshn on 5/24/22.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(const std::string &name);
	FragTrap();
	virtual ~FragTrap();
	void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_HPP
