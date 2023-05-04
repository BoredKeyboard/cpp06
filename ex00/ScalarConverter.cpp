/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:39 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/04 16:17:13 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

void	convertChar(std::string str) {
	if (str.length() != 1) {
		std::cout << "char: Impossible" << std::endl;
		return ;
	}
	char c = *str.cbegin();
	std::cout << "char: " << c << std::endl;
}

void		convertInt(std::string str) {
	int	i = std::stoi(str);
}

void	convertFloat(std::string str) {
	float f = std::stof(str);
}

void	convertDouble(std::string str) {
	double d = std::stod(str);
}
