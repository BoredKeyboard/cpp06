/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:58 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:35:00 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) {
}

B::B(B const & src) {
}

B::~B(void) {
}

B & B::operator=(B const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
