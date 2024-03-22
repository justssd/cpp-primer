// IMPORTANT: CONSIDER READABILITY AND CACHE LOCALITY
#include <iostream>
#include <climits>

class class_alignment {
public:
	char C;
	char* p;
	char c;
	long x;
};

char C;
char* p;
char c;
long x;
int main() {
	std::cout << "char C " << (uintptr_t) &C << std::endl;
	std::cout << "char* p " << (uintptr_t) &p << std::endl;
	std::cout << "char c " << (uintptr_t) &c << std::endl;
	std::cout << "long x " << (uintptr_t) &x << std::endl;
	class_alignment example;
	std::cout << "-------- Class public members --------" << std::endl;
	std::cout << "Address of class_alignment example " << (uintptr_t) &example << std::endl;
	std::cout << offsetof(class_alignment, C) << std::endl;
	std::cout << "char C " << (uintptr_t) &example.C << std::endl;
	std::cout << "char* p " << (uintptr_t) &example.p << std::endl;
	std::cout << "char c " << (uintptr_t) &example.c << std::endl;
	std::cout << "long x " << (uintptr_t) &example.x << std::endl;
	
	return 0;
}
