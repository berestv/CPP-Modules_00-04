#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
	std::string mType;

public:
	Ice();
	Ice(const Ice& ic);
	Ice &operator=(const Ice& ic);
	~Ice();

	std::string const & getType();
	Ice* clone() const override;
	void use(ICharacter& target);
};

#endif //ICE_HPP
