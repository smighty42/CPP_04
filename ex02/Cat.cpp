#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    _type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}


Cat::Cat(const Cat &copy) : Animal(copy)
{
    _type = copy._type;
    brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    _type = copy._type;
    brain = new Brain(*copy.brain);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miyav Miyav" << std::endl;
}


void Cat::setIdeas(int index, std::string idea)
{
	brain->setIdeas(index, idea);
}

std::string Cat::getIdeas(int index) const 
{
	return brain->getIdeas(index);
}


