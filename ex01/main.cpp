#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------------------" << std::endl;
	Dog brian;
	Cat garfield;
	Dog brianCopy = brian;
    Cat garfieldCopy = garfield;

	std::cout << std::endl;
	
    std::cout << "Modifying original dog's brain" << std::endl;
    brian.setIdeas(0, "Greatest idea in the world.");
    
    std::cout << "Original dog's idea: " << brian.getIdeas(0) << std::endl;
    std::cout << "Copied dog's before copying the idea: " << brianCopy.getIdeas(0) << std::endl;
	brianCopy.~Dog();
	brianCopy = brian;
    std::cout << "Copied dog's after copying the idea: " << brianCopy.getIdeas(0) << std::endl;

    std::cout << std::endl;

	std::cout << "-------------------" << std::endl;


	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

}
