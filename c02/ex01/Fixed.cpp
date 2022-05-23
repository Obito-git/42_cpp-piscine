//
// Created by amyroshn on 5/21/22.
//

#include "Fixed.hpp"

/*
 *
 *                 CONSTRUCTORS/DESTRUCTORS
 *
 */
Fixed::Fixed() {
	_fix_point_numb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int numb) {
	_fix_point_numb = roundf(numb * (1 << Fixed::MAX_NUMB));
}

Fixed::Fixed(const float numb) {
	std::cout << "Temp " << numb * 1 << Fixed::MAX_NUMB << std::endl;
	_fix_point_numb = roundf(numb * (float)(1 << Fixed::MAX_NUMB));
}

Fixed::Fixed(const Fixed &old) {
	std::cout << "Copy constructor called" << std::endl;
	_fix_point_numb = old.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

/*
 *
 *                      FUNCTIONS
 *
 */

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fix_point_numb;
}

void Fixed::setRawBits(int fixPointNumb) {
	std::cout << "setRawBits member function called" << std::endl;
	_fix_point_numb = fixPointNumb;
}

float Fixed::toFloat(void) const {
	return (float)this->_fix_point_numb / (float) (1 << Fixed::MAX_NUMB);
}

int Fixed::toInt(void) const {
	return this->_fix_point_numb >> Fixed::MAX_NUMB;
}

/*
 *
 *                  OVERLOADING
 *
 */
std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix_point_numb = other.getRawBits();
	return (*this);
}
