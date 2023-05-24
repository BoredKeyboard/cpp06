/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:19:51 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:30:36 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void) {

	Data		*testdata = new Data;
	Data		*checkdata;
	uintptr_t	p;

	testdata->nbr = 42;

	std::cout << testdata << std::endl;
	std::cout << testdata->nbr << std::endl;

	p = Serializer::serialize(testdata);
	std::cout << p << std::endl;

	checkdata = Serializer::deserialize(p);
	std::cout << checkdata << std::endl;
	std::cout << checkdata->nbr << std::endl;

	p = Serializer::serialize(checkdata);
	std::cout << p << std::endl;

	return (EXIT_SUCCESS);
}
