#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_hp = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_hp = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap name constructor for " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy){
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackdamage = other._attackdamage;
		this->_energypoints = other._energypoints;
		this->_hp = other._hp;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (_hp > 0 && _energypoints > 0) {
		std::cout << "ScavTrap " << _name << " has attacked " << target << " for " << _attackdamage << " damage" << std::endl;
		_energypoints--;
	}
	else {
		std::cout << "ScavTrap " << _name << " is out of energypoints or hp" << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
