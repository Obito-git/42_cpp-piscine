#include <iostream>

int main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "shhhhh... I think the students are asleep...";
	else
		for(int i = 1; av[i]; i++)
			for (int y = 0; av[i][y]; y++)
				std::cout << char(toupper(av[i][y]));
	std::cout << std::endl;
	return (0);
}