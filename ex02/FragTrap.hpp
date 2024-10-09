#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap& operator=(const FragTrap& other);

	void highFivesGuys(void);
};