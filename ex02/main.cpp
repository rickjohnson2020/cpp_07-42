#include "./Array.hpp"
#include <exception>
#include <iostream>


int main() {

	std::cout << "===== TEST 1 =====" << std::endl;

	Array<std::string> strArr1(5);
	std::cout << "strArr1 size: " << strArr1.size() << std::endl;

	try {
		strArr1[0] = "42";
		strArr1[1] = "is";
		strArr1[2] = "over";
		strArr1[4] = "!";
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 5; i++) {
		try {
			std::cout << strArr1[i] << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	Array<std::string> strArr2 = strArr1;
	std::cout << "strArr2 size: " << strArr1.size() << std::endl;

	try {
		strArr2[2] = "not over";
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 5; i++) {
		try {
			std::cout << strArr2[i] << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "===== TEST 2 =====" << std::endl;

	Array<int> intArr1(10);
	std::cout << "intArr1 size: " << intArr1.size() << std::endl;

	for (int i = 4; i < 10; i++) {
		try {
			intArr1[i] = i;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	Array<int> intArr2;
	std::cout << "intArr2 size (before copy): " << intArr2.size() << std::endl;
	try {
		std::cout << intArr2[0] << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	intArr2 = intArr1;
	intArr2[0] = 100;
	std::cout << "intArr2 size (after copy): " << intArr2.size() << std::endl;

	for (int i = 0; i < 10; i++) {
		try {
			std::cout << intArr2[i] << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
}