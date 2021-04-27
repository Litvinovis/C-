#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_n;
		static const int	_bit = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);

		Fixed &	operator=(Fixed const &smthg);
		
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif