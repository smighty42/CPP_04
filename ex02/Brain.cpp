#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called." << std::endl;
    size_t i=0;
	while(i < 100)
    {
		_ideas[i] = copy._ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
    size_t i=0;
	while(i < 100)
    {
		_ideas[i] = copy._ideas[i];
        i++;
    }
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called "<< std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
	if(index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const 
{
	if(index >= 0 && index < 100)
		return(_ideas[index]);
	else
		return ("no index");
}
