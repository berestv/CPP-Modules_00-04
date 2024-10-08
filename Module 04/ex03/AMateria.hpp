#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string mType;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& am);
	virtual AMateria &operator=(const AMateria& am);
	virtual ~AMateria();


	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
