/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/03 15:30:01 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/23 13:49:56 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "ScalarConverter.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Incorrect amount of arguments" << std::endl;
	}
	// std::stringstream stream;
	// float	i;

	// stream.str("145");
	// stream >> i;
	// std::cout << i << std::endl;
	ScalarConverter::convert(argv[1]);
}
