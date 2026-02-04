#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Copy assignment operator called."<< std::endl;
	_type = copy._type;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "Miyav Miyav" << std::endl;
}