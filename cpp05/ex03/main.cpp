#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);

    // Création d'un ShrubberyCreationForm
    AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Home");
    if (shrub) {
        boss.signForm(*shrub);
        boss.executeForm(*shrub);
        delete shrub;
    }

    std::cout << "--------------------------" << std::endl;

    // Création d'un RobotomyRequestForm
    AForm* robot = someRandomIntern.makeForm("robotomy request", "Bender");
    if (robot) {
        boss.signForm(*robot);
        boss.executeForm(*robot);
        delete robot;
    }

    std::cout << "--------------------------" << std::endl;

    // Création d'un PresidentialPardonForm
    AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    if (pardon) {
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon;
    }

    std::cout << "--------------------------" << std::endl;

    // Test d'un nom de formulaire invalide
    AForm* invalid = someRandomIntern.makeForm("coffee request", "Nobody");
    if (invalid) {
        delete invalid;
    }

    return 0;
}
