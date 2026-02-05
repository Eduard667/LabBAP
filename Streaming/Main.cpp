#include <iostream>


int main(int argn, char* argv[])
{
	char c[5];
	std::cin.get(c, 5); // changed from std::cin >> c;
	std::cout << "c = " << c << std::endl;
	// The issue with the >> streaming operator is that it does not handle input 
	// that exceeds the size of the array. It doesn't even tell us where the terminator of the array is
	// The >> streaming operator is not ideal for storing values onto an array.

	// The cin.get() version will automatically only store values onto the array
	// only up to the size that we declare the array to be, and no more. 
}

