#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>  // pour std::atoi

Zombie* ZombieHorde(int N, std::string name);

int main(int argc, char** argv)
{
    if (argc != 3) {
        std::cout << "Error: number args" << std::endl;
        return 1;
    }

    int count = std::atoi(argv[1]);
    if (count <= 0) {
        std::cout << "Number of zombies must be greater than 0." << std::endl;
        return 1;
    }

    std::string name = argv[2];
    Zombie* horde = ZombieHorde(count, name);

    for (int i = 0; i < count; ++i)
        horde[i].announce();

    delete[] horde;
    return 0;
}
