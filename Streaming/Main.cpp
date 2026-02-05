#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int i;
	float f;
	std::string s;
	// take a string from the console - e.g. "Hello World"
	// take an int and float from the console - separated by a space, e.g. "1 6.7"
	std::cin >> i >> f >> s;
	// output the int and float to the console
	std::cout << "i = " << i << "\n" << "f = " << f <<  "\n" << "s = " << s << std::endl;
}
