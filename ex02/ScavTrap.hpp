#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);

	void guardGate();
	void attack(const std::string &target);
};