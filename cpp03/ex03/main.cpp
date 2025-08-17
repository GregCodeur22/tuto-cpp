#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Diamond");

    dt.attack("Enemy");
    dt.takeDamage(30);
    dt.beRepaired(20);
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();

    return 0;
}