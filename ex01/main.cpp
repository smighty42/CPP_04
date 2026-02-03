#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
	j->makeSound();
	Dog tosun;
	std::cout<< tosun.getIdeas(2) << std::endl;
	tosun.setIdeas(1,"meyve suyu ic");
	tosun.setIdeas(2,"nane ye");
	std::cout<< tosun.getIdeas(1) << std::endl;
	std::cout<< tosun.getIdeas(2) << std::endl;
    delete meta;
    delete j;
    delete i;

    return 0;
}

