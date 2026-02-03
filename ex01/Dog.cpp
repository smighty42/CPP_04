#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    _type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog &copy) : Animal(copy)
{
    _type = copy._type;
    brain = new Brain(*copy.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
    _type = copy._type;
    brain = new Brain(*copy.brain);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hav Hav" << std::endl;
}

void Dog::setIdeas(int index, std::string idea)
{
	brain->setIdeas(index, idea);
}

std::string Dog::getIdeas(int index) const 
{
	return brain->getIdeas(index);
}


