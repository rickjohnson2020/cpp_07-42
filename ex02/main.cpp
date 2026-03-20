#include "./Array.hpp"
#include <iostream>


int main() {

	std::cout << "===== TEST 1 =====" << std::endl;

	Array<std::string> strArr1(4);
	std::cout << "strArr1 size: " << strArr1.size() << std::endl;

	try {
		strArr1[0] = "hello";
		strArr1[1] = "42";
		strArr1[2] = "!";
		strArr1[4] = "!";
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Array<std::string> strArr2 = strArr1;
	std::cout << "strArr2 size: " << strArr1.size() << std::endl;

	for (int i = 0; i < 4; i++) {
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
	intArr2 = intArr1;

	for (int i = 0; i < 11; i++) {
		try {
			std::cout << intArr2[i] << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
}