/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:06 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:42:17 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base {
	private:

	public:
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
		virtual ~Base(void);
};

#endif
