//
// Created by amyroshn on 6/9/22.
//
#include "Span.hpp"
#include <iostream>
int main() {
	Span sp = Span(100000);
	sp.addNumber(50000,1);
	sp.addNumber(100001,150000);
	std::cout << "Element's in span: " << sp.size() << std::endl;
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	std::cout << std::endl << "Subject test: " << std::endl;
	Span sp2 = Span(5);
	sp2.addNumber(6);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}