#include "Harl.hpp"
#include <string>

int main()
{
    Harl Harlinstance;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "UNKNOWN"};

    for (int i = 0; i < 5; i++)
        Harlinstance.complain(levels[i]);

    return 0;
}
