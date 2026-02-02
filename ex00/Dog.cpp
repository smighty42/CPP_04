#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Copy assignment operator called."<< std::endl;
	_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "Hav Hav" << std::endl;
}