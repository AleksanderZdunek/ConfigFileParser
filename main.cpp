#include <iostream>

#include "ConfigFileParser.h"

int main(int argc, char* argv[])
{
	std::cout << "Config File Parser Test!" << std::endl;

	ConfigFileParser CFGFile;

	int varA{0};
	float varB{0};

	CFGFile.RegisterVar("foo", &varA);
	CFGFile.RegisterVar("bar", &varB);

	std::cout << "ReadFile result: " << CFGFile.ReadFile() << "\n";

	std::cout << varA << " " << varB << std::endl;

	return 0;
}
