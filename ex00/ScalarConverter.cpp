/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/28 13:46:28 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {
	*this = src;
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

float	trunc_float(float f) {
	float	f_rounded;
	float	f_new;

	f_rounded = std::round(f);
	f_new = f - f_rounded;
	if (f_new == 0) {
		return (f);
	}
	f_new *= 10.0;
	f_new = std::round(f_new);
	f_new /= 10.0;
	f_new += f_rounded;
	return (f_new);
}

double	trunc_double(double d) {
	double	d_rounded;
	double	d_new;

	d_rounded = std::round(d);
	d_new = d - d_rounded;
	if (d_new == 0) {
		return (d);
	}
	d_new *= 10.0;
	d_new = std::round(d_new);
	d_new /= 10.0;
	d_new += d_rounded;
	return (d_new);
}

void	ScalarConverter::convertChar(std::string str, int &i, double &d, float &f, char &c) {
	c = str[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
}

void	ScalarConverter::convertInt(std::string str, int &i, double &d, float &f, char &c) {
	std::stringstream ss;

	ss << str;
	ss >> i;
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
}

void	ScalarConverter::convertFloat(std::string str, int &i, double &d, float &f, char &c) {
	std::stringstream ss(str.substr(0, str.length() - 1));

	ss >> f;
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
}

void	ScalarConverter::convertDouble(std::string str, int &i, double &d, float &f, char &c) {
	std::stringstream ss;

	ss << str;
	ss >> d;
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
}

void	ScalarConverter::print_result(int i, double d, float f, char c) {
	float	f_rounded = std::roundf(f);

	f = trunc_float(f);
	d = trunc_double(f);

	if (std::isprint(c)) {
		std::cout << "char: '" << c << "'" << std::endl;
	}
	else if (CHAR_MIN <= f && f <= CHAR_MAX) {
		std::cout << "char: Non displayable" << std::endl;
	}
	else {
		std::cout << "char: impossible" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	if (f_rounded == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

int	ScalarConverter::digit_check(std::string src) {	// check for every character if it is possible in an int/float/double. Otherwise it is a char/impossible.
	bool	has_decimal = false;
	for (unsigned long i = 0; i < src.length(); i++) {
		if (!std::isdigit(src[i])) {
			if ((src[i] == '+' || src[i] == '-') && i == 0 && src.length() != 1) {
				continue ;
			}
			if (src[i] == '.' && src.length() != 1) {
				if (has_decimal)
					return UNKNOWN;
				has_decimal = true;
				continue ;
			}
			if (has_decimal && src[i] == 'f' && i == src.length() - 1) {
				continue ;
			}
			if (src.length() == 1) {
				return CHAR;
			}
			return UNKNOWN;
		}
	}
	if (src[src.length() - 1] == 'f' && has_decimal) {	// lengte 0??
		return FLOAT;
	}
	if (has_decimal) {
		return DOUBLE;
	}
	return INT;
}

bool	ScalarConverter::special_cases(std::string src) {
	if (src == "nan" || src == "nanf"
		|| src == "+nan" || src == "-nan"
		|| src == "+nanf" || src == "-nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (true);
	}
	else if (src == "inf" || src == "+inf" || src == "-inf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (src == "inf") {
			std::cout << "float: +inff" << std::endl;
		}
		else {
			std::cout << "float: " << src << "f" << std::endl;
		}
		if (src == "inf") {
			std::cout << "double: +inf" << std::endl;
		}
		else {
			std::cout << "double: " << src << std::endl;
		}
		return (true);
	}
	else if (src == "inff" || src == "+inff" || src == "-inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (src == "inff") {
			std::cout << "float: +inff" << std::endl;
		}
		else {
			std::cout << "float: " << src << std::endl;
		}
		if (src == "inff") {
			std::cout << "double: +inf" << std::endl;
		}
		else {
			std::cout << "double: " << src.substr(0, src.length() - 1) << std::endl;
		}
		return (true);
	}
	return (false);
}

void	ScalarConverter::determine_type(std::string src) {
	int		i;
	double	d;
	float	f;
	char	c;

	if (ScalarConverter::special_cases(src)) {
		return ;
	}
	switch (ScalarConverter::digit_check(src)) {
		case (FLOAT) : {
			// float
			// std::cout << "float" << std::endl;
			ScalarConverter::convertFloat(src, i, d, f, c);
			break ;
		}
		case (DOUBLE) : {
			// double
			// std::cout << "double" << std::endl;
			ScalarConverter::convertDouble(src, i, d, f, c);
			break ;
		}
		case (INT) : {
			// int
			// std::cout << "int" << std::endl;
			ScalarConverter::convertInt(src, i, d, f, c);
			break ;
		}
		case (CHAR) : {
			// char
			// std::cout << "char" << std::endl;
			ScalarConverter::convertChar(src, i, d, f, c);
			break ;
		}
		case (UNKNOWN) : {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	ScalarConverter::print_result(i, d, f, c);
}

void	ScalarConverter::convert(std::string src) {
	ScalarConverter::determine_type(src);
}
