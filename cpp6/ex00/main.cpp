#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
enum Mode { special, in, cha, doubl, floa, error };

bool special_form(std::string str)
{
	if (!str.compare("-inf") || !str.compare("-inff")
	 || !str.compare("nan") || !str.compare("nanf")
	 || !str.compare("+inf") || !str.compare("+inff"))
		return (true);
	return (false);
}

int	is_printable(char c)
{
	if (32 <= c && c <= 127)
		return (1);
	return (std::cout << "Non displayable" << std::endl, 0);
}

Mode error_str(std::string str)
{
	int point = 0;
	bool p = false;
	bool f = false;

	if (special_form(str))
		return (special);
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		return (cha);
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; str[i]; i++)
	{
		if (f) // si plusieurs f
			return (error);
		if (str[i] == '.') // si point
		{
			if (p) // si deja un point avant
				return (error);
			point += 1; // compt point
			p = true;
		}
		else if (str[i] == 'f') // si f
			f = true;
		else if (str[i] < '0' || str[i] > '9') // si pas digit
			return (error);
		else // si digit
			if (p) // point bien suivi d'un digit
				p = false;
	}
	if (p) // point a la fin
		return (error);
	if (point > 1) // pas plus de 1 point
		return (error);
	if (!point && f) // si non point mais f
		return (error);
	double max = strtod(str.c_str(), NULL);
	if (point && f)
		return floa;
	else if (point && f && str[(str.length() - 2)] == '.')
		return error;
	else if (!point && !f && max >= std::numeric_limits<int>::min() && max <= std::numeric_limits<int>::max())
		return in;
	return doubl;
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "./convert {number}" << std::endl, 1);


	std::string str = static_cast<std::string>(av[1]);
	Mode mode = error_str(str);
	if (mode == error)
		return(std::cerr << "Error" << std::endl, 1);

	switch (mode)
	{
		case cha:  // char
			{
				std::cout << "char : " << str << std::endl;
				std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
				std::cout << "float : " << static_cast<float>(str[0]) << ".0f" << std::endl;
				std::cout << "double : " << static_cast<double>(str[0]) << ".0" << std::endl;
			}
			break;

		case in : // int
			{
				std::cout << "char : ";
				int c = std::atoi(str.c_str());
				if (32 <= c && c <= 127)
					std::cout << static_cast<char>(c) << std::endl;
				else
					std::cout << "Non displayable" << std::endl;
				std::cout << "int : " << str << std::endl;
				std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
				std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
			}
			break;

		case floa : // float
			{
				float x = std::strtof(str.c_str(), NULL);

				std::cout << "char : ";
				int c = static_cast<int>(x);
				if (32 <= c && c <= 127)
					std::cout << static_cast<char>(c) << std::endl;
				else
					std::cout << "Non displayable" << std::endl;

				double overflow = static_cast<double>(x);
				// double overflow = std::strtod(str.c_str(), NULL);
				if (overflow <= static_cast<double>(std::numeric_limits<int>::max()) && overflow >= static_cast<double>(std::numeric_limits<int>::min()))
					std::cout << "int : " << static_cast<int>(overflow) << std::endl;
				else
					std::cout << "int : " << "Non displayable" << std::endl;
				std::cout << "float : " << str << std::endl;
				std::cout << "double : " << overflow << std::endl;
			}
			break;

		case doubl : // double
			{
				float x = std::strtod(str.c_str(), NULL);

				std::cout << "char : ";
				int c = static_cast<int>(x);
				if (32 <= c && c <= 127)
					std::cout << static_cast<char>(c) << std::endl;
				else
					std::cout << "Non displayable" << std::endl;

				double overflow = std::strtod(str.c_str(), NULL);
				if (overflow <= static_cast<double>(std::numeric_limits<int>::max()) && overflow >= static_cast<double>(std::numeric_limits<int>::min()))
					std::cout << "int : " << static_cast<int>(overflow) << std::endl;
				else
					std::cout << "int : " << "Non displayable" << std::endl;
				std::cout << "float : " << static_cast<float>(overflow) << "f" << std::endl;
				std::cout << "double : " << str << std::endl;
			}
			break;

		case special :
			{
				std::cout << "char : " << "impossible" << std::endl;
				std::cout << "int : " << "impossible" << std::endl;
				if (!str.compare("nan") || !str.compare("nanf"))
				{
					std::cout << "float : nanf" << std::endl;
					std::cout << "double : nan" << std::endl;
				}
				else if (!str.compare("-inf") || !str.compare("-inff"))
				{
					std::cout << "float : -inff" << std::endl;
					std::cout << "double : -inf" << std::endl;
				}
				else if (!str.compare("+inf") || !str.compare("+inff"))
				{
					std::cout << "float : +inff" << std::endl;
					std::cout << "double : +inf" << std::endl;
				}
			}
			break;

		default:
			break;
	}
	return (0);
}
