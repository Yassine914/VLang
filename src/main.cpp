#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
	// TODO: load in the file.
	const char *filename = "examples/main.v";

	std::ifstream file;
	file.open(filename, std::ios::in);
	std::cout << "file opened successfuly";

	std::stringstream buff;
	while(file)
	{
		buff << file.rdbuf();
		std::cout << "[FILE]: " << buff.str() << std::endl;
	}

	file.close();
}