#include <iostream>

int main()
{
	int sum = 0;
	// read until end-of-file, calculating a running total of all values read
	for (int val = 0; std::cin >> val; sum += val);
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
