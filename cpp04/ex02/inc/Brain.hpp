//
// Created by Anton on 25/05/2022.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <string>
#include <iostream>

class Brain {
public:
	//constructors/destructors
	Brain();
	Brain(Brain &other);
	virtual ~Brain();
	//const
	static const int IDEAS_COUNT = 100;
	const std::string *getIdeas() const;
	void setIdeas(int ind, const std::string &idea);
	//methods

	//overloading
	Brain &operator=(const Brain &other);
private:
	std::string ideas[IDEAS_COUNT];
};


#endif //EX01_BRAIN_HPP
