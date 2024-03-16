#include <iostream>

int main()
{
	std::cout << "Enter two numbers:";
	std::cout << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
		  << v1 * v2;
		  << std::endl;
	// Not legal.
	// error: expected primary-expression before ‘<<’ token
	// << is intended to be an output stream operator in this specific context.
	// Prepend std::cout to fix.
	return 0;
}
