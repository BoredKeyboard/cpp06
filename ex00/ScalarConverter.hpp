/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:20 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/10 14:07:12 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <cctype>
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class ScalarConverter {
	private:
		static char		convertChar(std::string str);
		static int		convertInt(std::string str);
		static float	convertFloat(std::string str);
		static double	convertDouble(std::string str);
	public:
		static void	convert(std::string src);
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		virtual ~ScalarConverter(void) = 0;
		ScalarConverter & operator=(ScalarConverter const & src);
};

#endif
