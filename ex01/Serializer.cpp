/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 14:45:26 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:27:09 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
}

Serializer::Serializer(Serializer const & src) {
	*this = src;
}

Serializer::~Serializer(void) {
}

Serializer & Serializer::operator=(Serializer const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
