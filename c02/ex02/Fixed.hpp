//
// Created by amyroshn on 5/21/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
private:
	int _fix_point_numb;
	static const int MAX_NUMB = 8;
public:
	//Constructors
	Fixed();
	Fixed(const int numb);
	Fixed(const float numb);
	Fixed(const Fixed &old);
	~Fixed();
	//Functions
	int getRawBits() const;
	void setRawBits(int fixPointNumb);
	float toFloat(void) const;
	int toInt(void) const;
	//Operators
	Fixed &operator=(Fixed const &other);
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
};

#endif //EX00_FIXED_HPP
