#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // random pour RobotomyRequestForm

    try {
        // Bureaucrats
        Bureaucrat bob("Bob", 140);      // peut signer Shrubbery
        Bureaucrat alice("Alice", 40);   // peut signer Robotomy
        Bureaucrat charlie("Charlie", 1); // peut tout signer et exécuter

        // Formulaires
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Marvin");
        PresidentialPardonForm pardon("Ford");

        // Affichage initial
        std::cout << shrub << std::endl;
        std::cout << robot << std::endl;
        std::cout << pardon << std::endl;

        // Tentative de signature
        bob.signForm(shrub);
        alice.signForm(robot);
        charlie.signForm(pardon);

        std::cout << "\n--- Tentatives d'exécution ---\n";

        // Tentative d'exécution
        try { shrub.execute(bob); std::cout << bob.getName() << " executed " << shrub.getName() << std::endl; }
        catch (std::exception &e) { std::cout << bob.getName() << " couldn’t execute " << shrub.getName() << " because " << e.what() << std::endl; }

        try { robot.execute(alice); std::cout << alice.getName() << " executed " << robot.getName() << std::endl; }
        catch (std::exception &e) { std::cout << alice.getName() << " couldn’t execute " << robot.getName() << " because " << e.what() << std::endl; }

        try { pardon.execute(charlie); std::cout << charlie.getName() << " executed " << pardon.getName() << std::endl; }
        catch (std::exception &e) { std::cout << charlie.getName() << " couldn’t execute " << pardon.getName() << " because " << e.what() << std::endl; }

    } catch (std::exception &e) {
        std::cout << "Erreur globale : " << e.what() << std::endl;
    }

    return 0;
}
