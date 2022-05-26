//
// Created by amyroshn on 5/26/22.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
#include <string>
#include <ICharacter.hpp>

class AMateria {
protected:
	std::string _type;
	AMateria();
public:
	AMateria(std::string const & type);
	std::string const & getType() const; //Returns the materia _type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
