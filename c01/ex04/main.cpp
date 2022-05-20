#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Wrong arg count" << std::endl;
		return (1);
	}
	std::string infile_name(av[1]);
	std::ofstream out;
	std::ofstream in;
	in.open(infile_name.data(), std::ios::in);
	if (!in.is_open()) {
		std::cout << "Can't open " << infile_name << std::endl;
		return (2);
	}
	out.open(infile_name.append(".replace").data(), std::ios::trunc);
	if (!out.is_open()) {
		in.close();
		std::cout << "Can't write result in " << infile_name << std::endl;
		return (3);
	}
	in.close();
	out.close();
	return 0;
}