//
// Created by Anton on 25/05/2022.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "============= SUBJECT TEST ==================" << std::endl;
	Animal *array[20];
	for (int i = 0; i < 4; i++) {
		i < 2 ? array[i] = new Dog : array[i] = new Cat;
		std::cout << "------" << "Animal: " << i << " was created ------" << std::endl;
	}
	std::cout << std::endl << std::endl << "=========== ARRAY CONTENT TEST ===========" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (i == 0)
			std::cout << "Expected 2 dogs:" << std::endl;
		std::cout << "-----------------------" << std::endl << array[i]->getType() << std::endl;
		array[i]->makeSound();
		if (i == 1)
			std::cout << std::endl << std::endl << "Expected 2 cats:" << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		delete array[i];
		std::cout << "------" << "Animal: " << i << " was deleted ------" << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "======== SUBJECT TESTS FINISHED ======" << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << std::endl << std::endl << std::endl;





	std::cout << "============= DEEP COPY TEST ==================" << std::endl;
	Cat tmp;
	tmp.set_animal_idea(0, "first");
	tmp.set_animal_idea(99, "last");
	std::cout << std::endl << std::endl << std::endl;
	{
		Cat a = tmp;
		std::cout << std::endl << std::endl << std::endl;
		std::cout << "Scope a ideas : " << std::endl;
		a.print_idea(0);
		a.print_idea(99);
		std::cout << std::endl << std::endl << std::endl;
	}
	std::cout << "Out of scope tmp ideas : " << std::endl;
	tmp.print_idea(0);
	tmp.print_idea(99);

	return 0;
}