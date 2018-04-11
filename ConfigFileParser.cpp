#include "ConfigFileParser.h"

int ConfigFileParser::ReadFile()
{
	unsigned int errorCount{0};

	file.open(filename, std::ios::in);
	if (!file.good())
	{
		errorCount++;
		file.close();
		file.open(filename, std::ios::out);
		file << defaultFileData.str();
		file.close();
		file.open(filename, std::ios::in);
		if (!file.good()) errorCount++;
	}

	while (!file.eof())
	{
		std::string label;
		std::string value;
		file >> label >> value;
		try
		{
			table.at(label)(value);
		}
		catch (std::out_of_range e)
		{
			//ignore
		}
	}

	file.close();

	return errorCount;
}
