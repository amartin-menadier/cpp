#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int		ft_sed(std::string filename, std::string s1, std::string s2)
{
	//open input file
	std::ifstream		input(filename);
	if (input.fail())
	{
		std::cout << "Error - Cannot open " << filename << std::endl;
		return (-1);
	}

	//create output file
	std::string		outputFilename = filename + ".replace";
	std::ofstream	output(outputFilename);
	if (output.fail())
	{
		std::cout << "Error - Cannot create" << outputFilename << std::endl;
		return (-1);
	}

	std::string		buffer;
	std::size_t		n;
	while (std::getline(input, buffer))
    {
		n = buffer.find(s1);
		while (n != std::string::npos)//max value for an uns int = error value
        {
			buffer.replace(n, s1.size(), s2);
			n = buffer.find(s1, n + s2.size());
        }
        output << buffer;
		if (buffer.size() > 0)
	        output << std::endl;
    }
    input.close();//actually useless her because files close themselves at the end of codeblocks
    output.close();//idem
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error - Usage: ./replace <file> <s1 to find> <s2 to replace with>" << std::endl;
	else if (!strlen(argv[2]) || !strlen(argv[3]))
		std::cout << "Error - Strings must not be empty" << std::endl;
	else
		return (ft_sed(argv[1], argv[2], argv[3]));
	return (0);
}