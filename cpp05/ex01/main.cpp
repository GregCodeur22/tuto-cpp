#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat bob("Bob", 50);
    Form contract("Contract", 30, 20);

    bob.signForm(contract);
    Bureaucrat boss("Boss", 1);
    boss.signForm(contract);

    return 0;
}
