/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.cpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:35:09 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:35:11 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {
}

A::A(A const & src) {
}

A::~A(void) {
}

A & A::operator=(A const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}