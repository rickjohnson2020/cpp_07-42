#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T* data;
	unsigned int _size;

public:
	Array() : data(NULL), _size(0) {
		std::cout << "Default constructor called" << std::endl;
	}
	
	Array(unsigned int n) : _size(n) {
		std::cout << "Size constructor called" << std::endl;
		data = new T[n]();
	}

	Array(const Array& other) : _size(other._size) {
		std::cout << "Copy constructor called" << std::endl;
		data = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			data[i] = other.data[i];
		}
	}

	~Array() {
		std::cout << "Destructor called" << std::endl;
		delete[] data;
	}

	// Array<int> a(3);
	// a[0] = 1;
	// Array<int> b = a;
	// b[0] = 100
	Array& operator=(const Array& other) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other) {
			delete[] data;
			data = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				data[i] = other.data[i];
			}
		}
		return *this;
	}

	T& operator[](unsigned int index) {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return data[index];
	}

	unsigned int size() const {
		return _size;
	}
};

#endif