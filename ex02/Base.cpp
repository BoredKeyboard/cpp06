/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 16:34:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/05/25 16:14:55 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base(void) {
}

Base * Base::generate(void) {
	srand((unsigned) time(NULL));
	int	random = rand() % 3;
	switch (random) {
		case (0) : {
			Base *newclass = new A();
			return (newclass);
		}
		case (1) : {
			Base *newclass = new B();
			return (newclass);
		}
		case (2) : {
			Base *newclass = new C();
			return (newclass);
		}
	}
	return (NULL);
}

void Base::identify(Base* p) {
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a == p) {
		std::cout << "A" << std::endl;
	}
	else if (b == p) {
		std::cout << "B" << std::endl;
	}
	else if (c == p) {
		std::cout << "C" << std::endl;
	}
	// std::cout << "P: " << p << std::endl << std::endl;
	// std::cout << "A: " << a << std::endl;
	// std::cout << "B: " << b << std::endl;
	// std::cout << "C: " << c << std::endl;
}

void Base::identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &a) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &a) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &a) {}
}
