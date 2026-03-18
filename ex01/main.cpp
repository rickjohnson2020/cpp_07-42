#include "./iter.hpp"

template <typename T>
void print(const T& x) {
	std::cout << x << std::endl;
}

void increment(int& x) {
	x++;
}

int main() {
	const int cnums[3] = {10, 20, 30};
	::iter(cnums, 3, print);

	std::cout << "========" << std::endl;

	int nums[3] = {10, 20, 30};
	::iter(nums, 3, increment);
	for (int i = 0; i < 3; i++) {
		std::cout << nums[i] << std::endl;
	}

	std::cout << "========" << std::endl;

	const std::string strings[3] = {"hello", "42", "!"};
	::iter(strings, 3, print);

	return 0;
}