/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 14:45:30 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:25:30 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

class Serializer {
	private:
		Serializer(void);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		Serializer(Serializer const & src);
		virtual ~Serializer(void) = 0;
		Serializer & operator=(Serializer const & src);
};

#endif
