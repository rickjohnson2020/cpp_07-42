#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, size_t arr_len, void (*func)(const T&)) {
	for (size_t i = 0; i < arr_len; i++) {
		func(array[i]);
	}
}

template <typename T>
void iter(T* array, size_t arr_len, void (*func)(T&)) {
	for (size_t i = 0; i < arr_len; i++) {
		func(array[i]);
	}
}

#endif