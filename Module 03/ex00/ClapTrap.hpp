#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hp;
	int enrg;
	int atk;

public:
	ClapTrap();
	ClapTrap(std::string nm);
	ClapTrap(const ClapTrap& c);
	ClapTrap &operator=(const ClapTrap& op);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
};

#endif //CLAPTRAP_HPP
