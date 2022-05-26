//
// Created by Anton on 25/05/2022.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	AAnimal *array[20];
	for (int i = 0; i < 10; i++) {
		i < 5 ? array[i] = new Dog : array[i] = new Cat;
		std::cout << std::endl;
	}
	std::cout << "======================================" << std::endl;
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			std::cout << "Expected 5 dogs:" << std::endl;
		std::cout << array[i]->getType() << std::endl;
		array[i]->makeSound();
		if (i == 4)
			std::cout << std::endl << std::endl << "Expected 5 cats:" << std::endl;
	}
	std::cout << std::endl;
	AAnimal *tmp; //array[4] == Dog, array[5] == Cat
	tmp = array[4];
	array[4] = array[5];
	array[5] = tmp;
	std::cout << "Expected cat" << std::endl;
	array[4]->makeSound();
	std::cout << "Expected dog" << std::endl;
	array[5]->makeSound();
	std::cout << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		delete array[i];
		std::cout << std::endl;
	}

	return 0;
}