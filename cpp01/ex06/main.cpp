#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Wrong arg count" << std::endl;
		return (1);
	}
	Harl h;
	switch (Harl::get_level(av[1])) {
		case Harl::debug_o:
			h.debug();
			break;
		case Harl::warning_o:
			h.warning();
			break;
		case Harl::error_o:
			h.error();
			break;
		case Harl::info_o:
			h.info();
			break;
		default:
			h.default_msg();
	}
}