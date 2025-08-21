#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    // Création du MateriaSource et apprentissage
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    // Tester dépassement de la limite
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // doit être ignoré si limite = 4

    // Création des personnages
    ICharacter* alice = new Character("Alice");
    ICharacter* bob   = new Character("Bob");

    // Création des materias
    AMateria* ice1  = src->createMateria("ice");
    AMateria* cure1 = src->createMateria("cure");

    // Équipement
    alice->equip(ice1);
    alice->equip(cure1);

    // Utilisation
    alice->use(0, *bob); // ice
    alice->use(1, *bob); // cure

    // Test clone indépendance
    AMateria* ice2 = ice1->clone();
    std::cout << "Cloned materia type: " << ice2->getType() << std::endl;

    // Test assignment et rééquipement
    AMateria* cure2 = src->createMateria("cure");
    Character char2("Charlie");
    char2.equip(cure2);
    char2.use(0, *bob);

    // Test unequip
    alice->unequip(0);
    alice->use(0, *bob); // ne doit rien faire ou utiliser le prochain slot

    // Nettoyage mémoire
    delete ice2;
    delete src;
    delete alice;
    delete bob;

    return 0;
}
