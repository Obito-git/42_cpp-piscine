//
// Created by amyroshn on 6/7/22.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#define DEFAULT_VALUE 0

template <typename T>
class Array {
private:
	unsigned int _current_size;
	T *array;
public:
	//default constructor
	Array<T>():_current_size(0) { array = new T[_current_size]; }
	//arraysize constructor
	Array<T>(unsigned int nbr_elements) : _current_size(nbr_elements) { array = new T[_current_size]; }
	//copy constructor
	Array<T>(const Array<T>& other): _current_size(other.size()) {
		array = new T[_current_size];
		for (size_t i = 0; i < other.size(); i++)
			array[i] = other.array[i];
	}
	//destructor
	virtual ~Array() { delete array; }
	//overloading []
	T& operator[](unsigned int index) const {
		if (index >= _current_size)
			throw ArrayOutOfBoundException();
		return (array[index]);
	}
	//overloading =
	Array<T>& operator=(const Array<T>& other) {
		if (this == &other)
			return *this;
		delete array;
		array = new T[other.size()];
		_current_size = other.size();
		for (int i = 0; i < other.size(); i++)
			array[i] = other.array[i];
		return (*this);
	}
	//getter
	unsigned int size() const {
		return _current_size;
	}
	//exception
	class ArrayOutOfBoundException: public std::exception {
	public:
		const char *what() const throw() {
			return "Array out of bound exception";
		}
	};
};


#endif //EX02_ARRAY_HPP
