#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_hp = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name){
	this->_hp = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap name constructor for " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy){
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor called" << std::endl;
}