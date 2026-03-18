#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
private:
	T* data;
	unsigned int _size;

public:
	Array() : array(NULL), _size(0) {}
	
	Array(unsigned int n) : _size(n) {
		data = new T[n](); // if put (), int will be initialized by 0
	}

	Array(const Array& other) {
		
	}
};

#endif