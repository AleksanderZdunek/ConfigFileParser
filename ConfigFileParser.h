//ConfigFileParser v0.01 16092016
#ifndef CONFIGFILEPARSER_H
#define CONFIGFILEPARSER_H

#include <string>
#include <fstream>
#include <map>
#include <functional>
#include <iostream>
#include <sstream>

class ConfigFileParser
{
public:
	ConfigFileParser(char filename[] = "config.cfg") : filename(filename)
	{
	};

	template<typename T>  void RegisterVar(std::string label, T* pVar)
	{
		defaultFileData << label << " " << *pVar << std::endl;

		table.insert
		(std::pair<std::string, std::function<void(std::string)>>
			(label,
				[=](std::string literal)
				{
					std::stringstream ss(literal);
					ss >> *pVar;
				}
			)
		);
	}

	int ReadFile();

private:
	char* filename;
	std::fstream file;
	std::ostringstream defaultFileData;

	std::map<std::string, std::function<void(std::string)>> table;
};

#endif // !CONFIGFILEPARSER_H
