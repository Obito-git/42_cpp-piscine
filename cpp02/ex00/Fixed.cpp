//
// Created by amyroshn on 5/21/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	_fix_point_numb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old) {
	std::cout << "Copy constructor called" << std::endl;
	_fix_point_numb = old.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix_point_numb = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fix_point_numb;
}

void Fixed::setRawBits(int fixPointNumb) {
	std::cout << "setRawBits member function called" << std::endl;
	_fix_point_numb = fixPointNumb;
}
