/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/23 15:50:06 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
bool ScalarConverter::is_float = false;
bool ScalarConverter::is_double = false;
bool ScalarConverter::is_int = false;

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

void	ScalarConverter::convertChar(std::string str) {
	std::stringstream ss;
	int		i;
	char	c;
	float	f;
	double	d;

	ss << str;
	ss >> c;
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);

	if (std::isprint(c)) {
		std::cout << "char: " << c << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::convertInt(std::string str) {
	std::stringstream ss;
	int		i;
	char	c;
	float	f;
	double	d;

	ss << str;
	ss >> i;
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	if (std::isprint(c)) {
		std::cout << "char: " << c << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::convertFloat(std::string str) {
	std::stringstream ss;
	int		i;
	char	c;
	float	f;
	double	d;

	ss << str;
	ss >> f;
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	float	f_rounded = std::roundf(f);

	f = trunc_float(f);
	d = trunc_double(f);

	if (std::isprint(c)) {
		std::cout << "char: " << c << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
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

void	ScalarConverter::convertDouble(std::string str) {
	std::stringstream ss;
	int		i;
	char	c;
	float	f;
	double	d;

	ss << str;
	ss >> d;
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	float	f_rounded = std::roundf(f);

	f = trunc_float(f);
	d = trunc_double(f);

	if (std::isprint(c)) {
		std::cout << "char: " << c << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
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

void	ScalarConverter::print_result(int &i, double &d, float &f, char &c) {
	if (std::isprint(c)) {
		std::cout << "char: " << c << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
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

bool isFloat(std::string myString) {
    std::istringstream iss(myString);
    float f;
    iss >> std::noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail();
}

bool isDouble(std::string myString) {
    std::istringstream iss(myString);
    double d;
    iss >> std::noskipws >> d; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail();
}

int	ScalarConverter::digit_check(std::string src) {	// check for every character if it is possible in an int/float/double. Otherwise it is a char/impossible.
	bool	has_decimal = false;
	for (unsigned long i = 0; i < src.length(); i++) {
		if (!std::isdigit(src[i])) {
			if ((src[i] == '+' || src[i] == '-') && i == 0) {
				continue ;
			}
			if (src[i] == '.') {
				has_decimal = true;
				continue ;
			}
			if (src[i] == 'f' && i == src.length() - 1) {
				continue ;
			}
			return CHAR;
		}
	}
	if (src[src.length() - 1] == 'f') {	// lengte 0??
		return FLOAT;
	}
	else if (has_decimal) {
		return DOUBLE;
	}
	else {
		return INT;
	}
	return INT;
}

void	ScalarConverter::determine_type(std::string src) {
	switch (ScalarConverter::digit_check(src)) {
		case (FLOAT) : {
			// float
			std::cout << "float" << std::endl;
			ScalarConverter::convertFloat(src);
			break ;
		}
		case (DOUBLE) : {
			// double
			std::cout << "double" << std::endl;
			ScalarConverter::convertDouble(src);
			break ;
		}
		case (INT) : {
			// int
			std::cout << "int" << std::endl;
			ScalarConverter::convertInt(src);
			break ;
		}
		case (CHAR) : {
			// char
			std::cout << "char" << std::endl;
			ScalarConverter::convertChar(src);
			break ;
		}
	}
}

void	ScalarConverter::convert(std::string src) {
	ScalarConverter::is_int = false;
	ScalarConverter::is_double = false;
	ScalarConverter::is_float = false;
	ScalarConverter::determine_type(src);
}
