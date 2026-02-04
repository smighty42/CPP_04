#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	_type = copy._type;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Copy assignment operator called."<< std::endl;
	_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const 
{
    std::cout << "Animal sound Animal sound" << std::endl;
}