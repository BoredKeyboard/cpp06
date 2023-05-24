/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:40 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:36:55 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base {
	private:

	public:
		C(void);
		C(C const & src);
		virtual ~C(void);
		C & operator=(C const & src);
};

#endif
