#include "./Array.hpp"
#include <iostream>


int main() {
	Array<std::string> arr(3);
	for (int i = 0; i < 3; i++) {
		std::cout << arr[i] << std::endl;
	}
}