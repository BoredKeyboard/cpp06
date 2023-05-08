/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/08 15:47:57 by mforstho      ########   odam.nl         */
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

void	ScalarConverter::convertChar(std::string str) {
	if (str.length() != 1) {
		std::cout << "char: Impossible" << std::endl;
		return ;
	}
	char c = *str.cbegin();
	std::cout << "char: " << c << std::endl;
}

void	ScalarConverter::convertInt(std::string str) {
	std::stringstream ss;
	int	result;

	ss << str;
	ss >> result;
	std::cout << "int: " << result << std::setprecision(2) << std::endl;
}

void	ScalarConverter::convertFloat(std::string str) {
	std::stringstream ss;
	float	result;

	ss << str;
	ss >> result;
	std::cout << "float: " << result << std::setprecision(2) << std::endl;
}

void	ScalarConverter::convertDouble(std::string str) {
	std::stringstream ss;
	double	result;

	ss << str;
	ss >> result;
	std::cout << "double: " << result << std::setprecision(5) << std::setw(7) << std::endl;
}

void	ScalarConverter::convert(std::string src) {
	ScalarConverter::convertChar(src);
	ScalarConverter::convertInt(src);
	ScalarConverter::convertFloat(src);
	ScalarConverter::convertDouble(src);
}
