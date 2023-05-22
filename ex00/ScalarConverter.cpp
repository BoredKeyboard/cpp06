/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/22 15:39:05 by mforstho      ########   odam.nl         */
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

// void	ScalarConverter::parse(std::string src) {
// 	if (isFloat(src) == 0) {
// 		std::cout << "float" << std::endl;
// 		// ScalarConverter::convertFloat(src);
// 	}
// 	else if (isDouble(src) == 0) {
// 		std::cout << "double" << std::endl;
// 	}
// 	else if (std::isdigit(src[0])) {
// 		std::cout << "int" << std::endl;
// 	}
// 	else if (isprint(src[0])) {
// 		std::cout << "char" << std::endl;
// 	}
// }

void	ScalarConverter::convert(std::string src) {
	if (isFloat(src) == 1) {
		std::cout << "float" << std::endl;
		ScalarConverter::convertFloat(src);
	}
	else if (isDouble(src) == 0) {
		std::cout << "double" << std::endl;
		ScalarConverter::convertDouble(src);
	}
	else if (std::isdigit(src[0])) {
		std::cout << "int" << std::endl;
		ScalarConverter::convertInt(src);
	}
	else if (isprint(src[0])) {
		std::cout << "char" << std::endl;
		ScalarConverter::convertChar(src);
	}
	// this->parse(src);
}
