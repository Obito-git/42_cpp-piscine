//
// Created by Anton on 25/05/2022.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!

	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	const WrongAnimal* wa = new WrongCat();
	std::cout << "Wrong animal sound is :";
	wa->makeSound();
	std::cout << std::endl;
	delete wa;
}