#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "**********Construction**********" << std::endl;
		const Animal* meta = new Animal();
		const Animal* Chien = new Dog();
		const Animal* Chat = new Cat();
		std::cout << std::endl << "**********Type**********" << std::endl;
		std::cout << BLUE << Chien->getType() << " is the type of Chien" NC<< std::endl;
		std::cout << YELLOW << Chat->getType() << " is the type of Chat" NC << std::endl;
		std::cout << std::endl << "**********Sound**********" << std::endl;
		std::cout << YELLOW "cat is going to make a sound -> "NC ;
		Chat->makeSound(); //will output the cat sound!
		std::cout << BLUE "dog is going to make a sound -> "NC ;
		Chien->makeSound();
		std::cout << "meta is going to make a sound -> ";
		meta->makeSound();
		std::cout << std::endl << "**********Destruction**********" << std::endl;
		delete Chat;
		delete Chien;
		delete meta;
	}
	{
	std::cout << std::endl << "**********WRONG ANIMAL**********" << std::endl;
	const WrongAnimal* WAnimal = new WrongAnimal();
	const WrongAnimal* WCat = new WrongCat();
	std::cout << PURPLE << WCat->getType() << " is the type of WCat" NC << std::endl;
	std::cout << CYAN << WAnimal->getType() << " is the type of WAnimal" NC << std::endl << std::endl;
	WCat->makeSound();
	WAnimal->makeSound();
	std::cout << std::endl;
	delete WCat;
	delete WAnimal;
	}
}
