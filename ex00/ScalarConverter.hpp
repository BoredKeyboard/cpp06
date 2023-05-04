/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:20 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/04 16:15:47 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter {
	private:
		void	convertChar(std::string str);
		void	convertInt(std::string str);
		void	convertFloat(std::string str);
		void	convertDouble(std::string str);
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		virtual ~ScalarConverter(void);
		ScalarConverter & operator=(ScalarConverter const & src);
};

#endif
