#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string &name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int	_hp;
	int _energypoints;
	int	_attackdamage;
};

#endif