/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:42:48 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

Base::~Base(void) {
}

Base * generate(void) {
	srand((unsigned) time(NULL));
	int	random = rand();
	
}

void identify(Base* p) {

}

void identify(Base& p) {

}
