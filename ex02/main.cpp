/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 13:02:12 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/25 13:24:50 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	// Base *test = Base::generate();
	// Base::identify(test);
	Base *test = Base::generate();
	Base::identify(*test);
	return (EXIT_SUCCESS);
}
