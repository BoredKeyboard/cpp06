/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   B.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:50 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:37:08 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base {
	private:

	public:
		B(void);
		B(B const & src);
		virtual ~B(void);
		B & operator=(B const & src);
};

#endif
