#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int fxp;
	static const int frac = 8;
public:
	Fixed();
	~Fixed();
	int getRawBits (void) const;
	void setRawBits (int const raw);
};

#endif //FIXED_HPP
