#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <cmath>

class	Fixed {
private:
	int					_n;
	static const int	_bit = 8;

public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const &src);

	Fixed &	operator=(Fixed const &smthg);

	int		getRawBits(void)const;
	void	setRawBits(int const raw);
    float	toFloat(void)const;
	int		toInt(void)const;

	~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif