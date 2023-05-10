/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/10 17:45:32 by mforstho      ########   odam.nl         */
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

char	ScalarConverter::convertChar(std::string str) {
	if (str == "nan") {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (!std::isprint((int)str[0])) {
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	char c = str[0];
	std::cout << "char: " << c << std::endl;
}

int		ScalarConverter::convertInt(std::string str) {
	std::stringstream ss;
	int	result;

	if (str == "nan") {
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	ss << str;
	ss >> result;
	std::cout << "int: " << result << std::setprecision(2) << std::endl;
}

float	ScalarConverter::convertFloat(std::string str) {
	std::stringstream ss;
	float	result;

	if (str == "nan") {
		std::cout << "float: nanf" << std::endl;
		return ;
	}
	ss << str;
	ss >> result;
	std::cout << std::setprecision(4) << "float: " << result << "f" << std::endl;
}

double	ScalarConverter::convertDouble(std::string str) {
	std::stringstream ss;
	double	result;

	if (str == "nan") {
		std::cout << "double: nan" << std::endl;
		return ;
	}
	ss << str;
	ss >> result;
	std::cout << std::setprecision(4) << "double: " << result << std::endl;
}

void	ScalarConverter::convert(std::string src) {
	char c;
	int i;
	float f;
	double d;
	if (true) {
		c = ScalarConverter::convertChar(src);
		i = static_cast<int>(c);
	}
	ScalarConverter::convertInt(src);
	ScalarConverter::convertFloat(src);
	ScalarConverter::convertDouble(src);
}
