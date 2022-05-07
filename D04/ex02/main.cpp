#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *D = new Dog();
	AAnimal *C = new Cat();
	D->makeSound();
	C->makeSound();
	delete (D);
	delete (C);
}