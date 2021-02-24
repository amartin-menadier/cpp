#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>//for INT_MAX and INT_MIN

const double MAX = static_cast<double>(INT_MAX);
const double MIN = static_cast<double>(INT_MIN);

// .c_str: converts a std::string to a null-terminated char*
// strtod(const char *str, char **endptr): converts str to a double. Stores in *endptr the address of the first non-digit character.
// strtol(const char *str, char **endptr): idem strtod but to long int 

int	get_precision(std::string s)
{
	int i = 0;
	int ret = 0;
	while (s[i] != '.')
		i++;
	i++;
	while (s[i])
	{
		ret++;
		i++;
	}
	return (ret);
}

void convertAFloat(std::string arg)
{
    char *endptr;
    const char *str = arg.c_str();
    if (arg == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (arg == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (arg == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    float f = static_cast<float>(strtod(str, &endptr));
    double d = static_cast<double>(f);
    int i = static_cast<int>(f);
    char c = static_cast<char>(i);
    if (&str[arg.length() - 1] != endptr)
    {
        std::cout << "Invalid input." << std::endl;
        return;
    }
 	if (i != d || d < 0 || d > 255)
		std::cout << "char: impossible" << std::endl;
    else if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;	
    if (d > MAX || d < MIN)
        std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;
    return;   
}

void convertADouble(std::string arg)
{
    char *endptr;
    const char *str = arg.c_str();
    if (arg == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (arg == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (arg == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    double d = strtod(str, &endptr);
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);
    char c = static_cast<char>(i);
    if (&str[arg.length()] != endptr)
    {
        std::cout << "Invalid input" << std::endl;
        return;
    }
	if (i != d || d < 0 || d > 255)
		std::cout << "char: impossible" << std::endl;
    else if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;	
    if (d > MAX || d < MIN)
        std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;
    return;   
}

void convertAnInt(std::string arg)
{
    char *p;
    const char *tmp = arg.c_str();
    long li = strtol(tmp, &p, 10);
    int i = static_cast<int>(li);
    double d = static_cast<double>(i);
    float f = static_cast<float>(i);
    char c = static_cast<char>(i);
    if (&tmp[arg.length()] != p || li != static_cast<long>(i))//check max int
    {
        std::cout << "Invalid input." << std::endl;
        return;
    }
	if (i != d || d < 0 || d > 255)
		std::cout << "char: impossible" << std::endl;
    else if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;	
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl; 
}

void convertAChar(std::string arg)
{
    char c = arg[1];
    int i = static_cast<int>(c);
	float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl; 
}

bool isDouble(std::string arg)
{
    for (std::string::size_type i = 0; i < arg.size(); i++)
        if (arg[i] == '.')
            return true;
    return false;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error:\n\tUsage: ./convert <number>" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
    if (arg.size() == 3 && arg[0] == '\'' && arg[2] == '\'')
        convertAChar(arg);
    else if (arg.size() > 1 && arg[arg.size() - 1] == 'f' && arg != "+inf" && arg != "-inf" && arg != "inf")
        convertAFloat(arg);
    else if (isDouble(arg.c_str()) || arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "-nan" || arg == "inf")
        convertADouble(arg);
    else
        convertAnInt(arg);
    return 0;
}
