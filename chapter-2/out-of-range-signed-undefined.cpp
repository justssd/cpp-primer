#include <iostream>

int main() {
	// IMPORTANT: RESULT IS UNDEFINED, THE BELOW PATTERN MIGHT NOT WORK EVERYWHERE AND EVERYTIME
	signed char x = -129; // -129 = -128 - 1. SUBTRACTING 1 HAS EFFECT GO UP 
	signed char y = 128; // 128 = 127 + 1. ADDING 1 HAS EFFECT GO DOWN
	signed char z = -256;
	std::cout << +x << std::endl;
	std::cout << +y << std::endl;
	std::cout << +z << std::endl;
	return 0;
}
