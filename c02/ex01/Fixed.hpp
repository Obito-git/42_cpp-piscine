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
	Fixed();
	Fixed(const int numb);
	Fixed(const float numb);
	Fixed(const Fixed &old);
	Fixed &operator=(Fixed const &other);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int fixPointNumb);
	float toFloat(void) const;
	int toInt(void) const;

	friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
};


#endif //EX00_FIXED_HPP
