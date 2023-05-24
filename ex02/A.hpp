/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   A.hpp                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:35:01 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/24 16:37:17 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base {
	private:

	public:
		A(void);
		A(A const & src);
		virtual ~A(void);
		A & operator=(A const & src);
};

#endif
