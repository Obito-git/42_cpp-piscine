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
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float numb) {
	_fix_point_numb = roundf(numb * (float)(1 << Fixed::MAX_NUMB));
	std::cout << "Float constructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed res;
	res.setRawBits(_fix_point_numb + other.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed res;
	res.setRawBits(_fix_point_numb - other.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator<(const Fixed &rhs) const {
	return _fix_point_numb < rhs._fix_point_numb;
}

bool Fixed::operator>(const Fixed &rhs) const {
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const {
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const {
	return !(*this < rhs);
}

bool Fixed::operator==(const Fixed &rhs) const {
	return _fix_point_numb == rhs._fix_point_numb;
}

bool Fixed::operator!=(const Fixed &rhs) const {
	return !(rhs == *this);
}
//prefix
Fixed &Fixed::operator++()
{
	this->_fix_point_numb++;
	return (*this);
}
//prefix
Fixed &Fixed::operator--()
{
	this->_fix_point_numb--;
	return (*this);
}
//postfix
Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->_fix_point_numb++;
	return (old);
}
//postfix
Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->_fix_point_numb--;
	return (old);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}
