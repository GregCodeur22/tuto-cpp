#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat bob("Bob", 50);
    Form contract("Contract", 30, 20);

    bob.signForm(contract); // Bob ne pourra pas signer (grade trop bas)
    Bureaucrat boss("Boss", 1);
    boss.signForm(contract); // Lui pourra signer

    return 0;
}
