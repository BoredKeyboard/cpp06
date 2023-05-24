/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:44 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:34:46 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) {
}

C::C(C const & src) {
}

C::~C(void) {
}

C & C::operator=(C const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
