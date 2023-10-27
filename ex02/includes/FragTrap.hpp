#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :

    FragTrap();

    public:

    FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &obj);

	void	highFivesGuys( void );
};

#endif