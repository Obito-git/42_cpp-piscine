//
// Created by amyroshn on 6/9/22.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


#include <exception>
#include <vector>
#include <iostream>
#include <algorithm>

class Span {
private:
	unsigned int max_val_;
	std::vector<int> content_;
public:
	//constructors / destructors
	Span();
	Span(const Span& other);
	Span(unsigned int maxVal);
	virtual ~Span();

	//assign operator
	Span &operator=(const Span& other);

	//methods
	void addNumber(int val);
	void addNumber(int from, int to);
	int longestSpan() ;
	int shortestSpan() ;
	size_t size() ;

	//exceptions
	class SpanIsFullException: public std::exception {
public:
	virtual const char *what() const throw();
};

class NoSpanFoundException: public std::exception {
public:
	virtual const char *what() const throw();
};

};


#endif //EX01_SPAN_HPP
