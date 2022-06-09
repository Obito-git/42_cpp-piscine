//
// Created by amyroshn on 6/9/22.
//

#include "Span.hpp"

//constructors / destructor
Span::Span() : max_val_(0), content_() {}
Span::Span(unsigned int maxVal) : max_val_(maxVal), content_() {}
Span::Span(const Span &other): max_val_(other.max_val_), content_(other.content_) {}
Span::~Span() {}

//assign operator
Span &Span::operator=(const Span &other) {
	if (this == &other)
		return *this;
	max_val_ = other.max_val_;
	content_ = other.content_;
	return (*this);
}

//methods
void Span::addNumber(int val) {
	if (size() == max_val_)
		throw SpanIsFullException();
	content_.push_back(val);
}

void Span::addNumber(int from, int to) {
	if (to < from) {
		int tmp = from;
		from = to;
		to = tmp;
	}
	for (; from <= to; from++) {
		if (size() == max_val_)
			throw SpanIsFullException();
		content_.push_back(from);
	}
}

int Span::longestSpan() {
	if (size() < 2)
		throw NoSpanFoundException();
	std::stable_sort(content_.begin(), content_.end());
	return *(content_.end() - 1) - *content_.begin();
}

size_t Span::size() {
	return content_.size();
}

int Span::shortestSpan() {
	if (size() < 2)
		throw NoSpanFoundException();
	std::stable_sort(content_.begin(), content_.end());
	std::vector<int>::iterator it = content_.end() - 1;
	int shortest = *it - *(it - 1);
	do {
		if (*it - *(it - 1) < shortest)
			shortest = *it - *(it - 1);
		it--;
	} while (it != content_.begin()) ;
	return shortest;
}


//exceptions

const char *Span::SpanIsFullException::what() const throw() {
	return "Span is full";
}

const char *Span::NoSpanFoundException::what() const throw() {
	return "No span found";
}
