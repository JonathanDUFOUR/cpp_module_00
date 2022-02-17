/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:40:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 02:27:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "class/Contact.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

# ifndef WIDTH
#  define WIDTH	10
# endif

class PhoneBook
{
private:
	Contact _contacts[8];

	// Member functions
	void		printBook(void);

	std::string	truncate(std::string str, std::size_t width);

public:
	// Constructors
	PhoneBook(void);

	// Destructors
	~PhoneBook(void);

	// Member functions
	int	addContact(void);
	int	searchContact(void);
};

#endif
