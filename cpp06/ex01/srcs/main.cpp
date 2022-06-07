//
// Created by amyroshn on 6/7/22.
//
#include "DataSerializer.hpp"
#include <iostream>
int main()
{
	Data before(42, "42");
	std::cout << before << std::endl << std::endl;

	uintptr_t serializedPtr = serialize(&before);
	std::cout << "uintptr_t val: " << serializedPtr << std::endl << std::endl;

	Data *after = deserialize(serializedPtr);
	std::cout << *after << std::endl;

	std::cout << "Changing to 4242.." << std::endl;
	after->value = 4242;
	after->s = "4242";
	std::cout << before << std::endl << std::endl;
	std::cout << "Conclusion: " << (&before == after ? "same pointers" : "different pointers") << std::endl;
}
