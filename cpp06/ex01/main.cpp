#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data d;
    d.id = 42;
    d.name = "hello";

    unsigned long raw = Serializer::serialize(&d);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "Original pointer: " << &d << "\n";
    std::cout << "Deserialized pointer: " << ptr << "\n";

    if (ptr == &d)
        std::cout << "OK, same pointer.\n";

    std::cout << "Data content: id=" << ptr->id << ", name=" << ptr->name << "\n";
    return 0;
}
