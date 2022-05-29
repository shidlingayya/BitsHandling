#include <iostream>

unsigned int flip_bits(unsigned int n)
{
	return (~n);
}

int main() 
{
	std::cout << "Flip bits(9): " << flip_bits(9LU) << std::endl;
	return 0;
}
