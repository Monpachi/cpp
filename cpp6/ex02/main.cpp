#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	//Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur Base.
	//Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire

	int r = rand() % 3;

	switch (r)
	{
		case 0:
			std::cout << "A is created" << std::endl;
			return (new A());
			break;
		case 1:
			std::cout << "B is created" << std::endl;
			return (new B());
			break;
		case 2:
			std::cout << "C is created" << std::endl;
			return (new C());
			break;
		default:
			break;
	}
	return (0);
}

void identify(Base* p)
{
	//Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
	(void)p;
	std::cout << "Conversion by PTR" << std::endl;

	try {
		A &a = dynamic_cast<A &>(*p);
		std::cout << "It's A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception &e) {}

	try {
		B &b = dynamic_cast<B &>(*p);
		std::cout << "It's B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::exception &e) {}

	try {
		C &c = dynamic_cast<C &>(*p);
		std::cout << "It's C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::exception &e) {}
}

void identify(Base& p)
{
	//Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". 
	//Utiliser un pointeur dans cette fonction est interdit.
	(void)p;
	std::cout << "Conversion by REF" << std::endl;
	
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "It's A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception &e) {}

	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "It's B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::exception &e) {}

	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "It's C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::exception &e) {}
}

int main()
{
	srand(time(NULL));

	std::cout << "\tRandomly generated" << std::endl;
	Base *base = generate();
	identify(base);
	identify(*base);

	std::cout << std::endl << "\tCreation of A" << std::endl;

	A a = A();
	identify(a);
	identify(&a);
	std::cout << std::endl << "\tCreation of B" << std::endl;
	B b = B();
	identify(b);
	identify(&b);
	std::cout << std::endl << "\tCreation of C" << std::endl;
	C c = C();
	identify(c);
	identify(&c);
}