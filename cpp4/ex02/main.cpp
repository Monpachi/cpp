#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "**********Construction**********" << std::endl;
		const AAnimal* Chien = new Dog();
		const AAnimal* Chat = new Cat();
		std::cout << std::endl << "**********Type**********" << std::endl;
		std::cout << BLUE << Chien->getType() << " is the type of Chien" NC<< std::endl;
		std::cout << YELLOW << Chat->getType() << " is the type of Chat" NC << std::endl;
		std::cout << std::endl << "**********Sound**********" << std::endl;
		std::cout << YELLOW << " cat is going to make a sound -> "NC ;
		Chat->makeSound(); //will output the cat sound!
		std::cout << BLUE << " dog is going to make a sound -> " NC ;
		Chien->makeSound();
		std::cout << std::endl << "**********Destruction**********" << std::endl;
		delete Chat;
		delete Chien;
	}
}
