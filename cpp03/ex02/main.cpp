#include "FragTrap.hpp"

int main()
{
    FragTrap ft("Freddy");

    ft.attack("enemy");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    return 0;
}