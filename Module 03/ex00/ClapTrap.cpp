#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Timmy"), hp(10), enrg(10), atk(0) {
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string nm) : name(nm), hp(10), enrg(10), atk(0) {
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) : name(cpy.name), hp(cpy.hp), enrg(cpy.enrg), atk(cpy.atk) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op) {
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	if (this != &op)
	{
		this->name = op.name;
		this->hp = op.hp;
		this->enrg = op.enrg;
		this->atk = op.atk;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called." << std::endl;
}

// --------- FUNCTIONS ---------

void ClapTrap::attack(const std::string &target) {
	if (this->enrg <= 0)
		std::cout << "Can't attack! No energy left." << std::endl;
	else if (this->hp <= 0)
		std::cout << "Can't attack...ClapTrap was clapped." << std::endl;
	else
	{
		this->enrg--;
		std::cout << this->name <<" attacks " << target << ", causing " << this->atk <<
		" points of damage! Energy after attack: " << this->enrg << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp <= 0)
		std::cout << this->name << " is already dead. Please stop." << std::endl;
	else if (this->enrg <= 0)
		std::cout << "Too exhausted for a fight...Please come back later." << std::endl;
	else
	{
		this->hp -= amount;
		if (this->hp <= 0)
			std::cout << this->name << " ClapTrap got clapped." << std::endl;
		else
			std::cout << "Ouch! " << this->name << " received " << amount <<
			" points of damage! Current HP: " << this->hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->enrg <= 0)
		std::cout << "Can't repair! No energy left." << std::endl;
	else if (this->hp <= 0)
		std::cout << "Can't repair...ClapTrap was clapped." << std::endl;
	else
	{
		this->enrg--;
		this->hp += amount;
		std::cout << this->name << " repaired " << amount << " hit points. Current HP: " << this->hp << ". Energy after repair: " << this->enrg << std::endl;
	}
}

std::string ClapTrap::getName() {
	return this->name;
}
