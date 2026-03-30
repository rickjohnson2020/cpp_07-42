#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T* _data;
	unsigned int _size;

public:
	Array() : _data(NULL), _size(0) {
		std::cout << "Default constructor called" << std::endl;
	}
	
	Array(unsigned int n) : _size(n) {
		std::cout << "Size constructor called" << std::endl;
		_data = new T[n]();
	}

	Array(const Array& other) : _size(other._size) {
		std::cout << "Copy constructor called" << std::endl;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_data[i] = other._data[i];
		}
	}

	~Array() {
		std::cout << "Destructor called" << std::endl;
		delete[] _data;
	}

	Array& operator=(const Array& other) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other) {
			_size = other._size;
			delete[] _data;
			_data = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_data[i] = other._data[i];
			}
		}
		return *this;
	}

	const T& operator[](unsigned int index) const {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _data[index];
	}

	T& operator[](unsigned int index) {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _data[index];
	}

	unsigned int size() const {
		return _size;
	}
};

#endif