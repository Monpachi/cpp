#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data prime;
    Data *a = &prime;
    uintptr_t b;
    Data *c;

    std::cout <<  "contenu de A:\n" "VALUE = "  << a->val1 << "\n";
    std::cout <<  "VALUE2 = " << a->val2 << std::endl << std::endl;
    std::cout <<  "adresse de A:\n"  <<  "adresse = "  << &a << "\n"  << std::endl;


    b = serialize(a);
    std::cout <<  "valeur de b uintptr_t [serializé à partir de "  "a" " ] : \n"   << b << "\n\n";

    c = deserialize(b);

    std::cout <<  "contenu de C [déserializé à partir de "  "b"  "]:\n"  "VALUE = "  << c->val1 << "\n";
    std::cout <<  "VALUE2 = "  << c->val2 << std::endl << std::endl;

    std::cout <<  "adresse de A:\n"  "adresse = "  << &a << "\n"  << std::endl;
}
