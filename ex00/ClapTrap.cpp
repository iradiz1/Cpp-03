#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Defoult"), _hp(10), _energypoints(10), _attackdamage(0){
	std::cout << "ClapTrap " << _name << " created by Default Constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energypoints(10), _attackdamage(0){
	std::cout << "ClapTrap " << _name << " created by name Constructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy){
	std::cout << "ClapTrap "<< _name << "copy called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << "  destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackdamage = other._attackdamage;
		this->_energypoints = other._energypoints;
		this->_hp = other._hp;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hp > 0 && _energypoints > 0) {
		std::cout << "ClapTrap " << _name << " has attacked " << target << " for " << _attackdamage << " damage" << std::endl;
		_energypoints--;
	}
	else {
		std::cout << "ClapTrap " << _name << " is out of energypoints or hp" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	    _hp -= amount;
    if (_hp <= 0) {
        _hp = 0;
        std::cout << "ClapTrap " << _name << " took " << amount << " damage and is now destroyed!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " took " << amount << " damage. Remaining hp: " << _hp << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energypoints > 0 && _hp > 0) {
		_hp += amount;
		_energypoints--;
		std::cout << "ClapTrap " << _name << " got " << amount << " hp back from reapir! Remaning hp: " << _hp << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " is out of energypoints or hp" << std::endl;
	}
}