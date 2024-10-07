#include "ClapTrap.hpp"

int main() {

	std::string name = "Clappy";
	
    ClapTrap defaultTrap;

    ClapTrap clapTrap1(name);

    ClapTrap clapTrap2(clapTrap1);

    clapTrap1.attack("Target1");
    clapTrap1.takeDamage(3);
    clapTrap1.beRepaired(5);

    return 0;
}