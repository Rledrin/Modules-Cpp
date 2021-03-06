#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    ScavTrap clap("Clap");
    ScavTrap trap("Trap");
    FragTrap frag("Frag");
    FragTrap prap;

    prap = frag;
    
	std::cout << std::endl;
    clap.rangedAttack("Trap");
    trap.takeDamage(20);
    clap.meleeAttack("Trap");
    trap.takeDamage(30);
    trap.beRepaired(35);
    frag.rangedAttack("Clap");
    trap.beRepaired(80);
    trap.takeDamage(120);
    frag.beRepaired(7);
    trap.beRepaired(33);
    frag.takeDamage(10);
    
    frag.vaulthunter_dot_exe("Clap");
    clap.challengeNewcomer("Trap");
    clap.challengeNewcomer("Trap");
    clap.challengeNewcomer("Trap");
    clap.challengeNewcomer("Trap");

    
	std::cout << std::endl;
    return (0);
}