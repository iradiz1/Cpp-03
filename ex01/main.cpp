#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap defaultClapTrap;
    ScavTrap defaultScavTrap;

    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");

    clap.attack("target1");
    scav.attack("target2");

    clap.takeDamage(3);
    scav.takeDamage(20);

    clap.beRepaired(5);
    scav.beRepaired(10);

    scav.guardGate();

    return 0;
}