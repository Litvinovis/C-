#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>


class   Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal;
		std::string	address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favoritemeal;
		std::string	underwear_color;
		std::string	darkest_secret;
		std::string	trunc(std::string str, size_t width);

	public:
		void		add(void);
		void		print_line(int idx);
		void		print_all(void);
};

#endif