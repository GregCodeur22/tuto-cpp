#include "Claptrap.hpp"

int main()
{
    Claptrap robot("Bobby");

    robot.attack("Target1");
    robot.takeDamage(5);
		robot.takeDamage(5);
    robot.beRepaired(3);

    robot.attack("Target2");
    robot.takeDamage(20);
    robot.beRepaired(5);

    return 0;
}
