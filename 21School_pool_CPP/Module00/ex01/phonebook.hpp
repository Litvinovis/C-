#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>
# include <limits>
# include <string>
# include <iostream>

class   PhoneBook {
private:
	int		num;
	Contact	lst_contact[8];
		
public:
	PhoneBook();
	void		add(void);
	void		search(void);
	~PhoneBook();
};

#endif
