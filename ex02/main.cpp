#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap defaultClapTrap;
    ScavTrap defaultScavTrap;
    FragTrap defaultFragTrap;

    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

    clap.attack("target1");
    scav.attack("target2");
    scav.attack("target3");

    clap.takeDamage(3);
    scav.takeDamage(20);
    scav.takeDamage(15);

    clap.beRepaired(5);
    scav.beRepaired(10);
    scav.beRepaired(8);

    frag.highFivesGuys();

    return 0;
}