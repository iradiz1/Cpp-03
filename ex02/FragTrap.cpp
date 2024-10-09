#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_hp = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hp = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap name constructor for " << _name << " called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy){
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackdamage = other._attackdamage;
		this->_energypoints = other._energypoints;
		this->_hp = other._hp;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap has requested a high five :)" << std::endl;
}