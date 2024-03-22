#include <iostream>

int main() {
	char c = 65;
	char C = -191;
	unsigned unsigned_char = 65;
	signed signed_char_negative = -65;
	signed signed_char_positive = 191;
	std::cout << "char C = -191 : " << C << std::endl;
	std::cout << "char c = 65 : " << c << std::endl;
	std::cout << "unsigned_char = 65 : " << unsigned_char << std::endl;
	std::cout << "signed_char_negative = -65 : " << signed_char_negative << std::endl;
	std::cout << "signed_char_positive = 191 : " << signed_char_positive << std::endl;
	return 0;
}
