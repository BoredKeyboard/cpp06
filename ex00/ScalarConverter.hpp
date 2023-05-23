/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 13:11:20 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/23 15:49:54 by mforstho      ########   odam.nl         */
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
# include <cmath>

class ScalarConverter {
	private:
		static void	convertChar(std::string str);
		static void	convertInt(std::string str);
		static void	convertFloat(std::string str);
		static void	convertDouble(std::string str);
		static void	print_result(int &i, double &d, float &f, char &c);
		static bool	is_int;
		static bool	is_double;
		static bool	is_float;
		// void		parse(std::string src);
	public:
		static int	digit_check(std::string src);
		static void	determine_type(std::string src);
		static void	convert(std::string src);
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		virtual ~ScalarConverter(void) = 0;
		ScalarConverter & operator=(ScalarConverter const & src);
		typedef enum e_datatype {
			INT,
			DOUBLE,
			FLOAT,
			CHAR
		}	datatype;
};

#endif
