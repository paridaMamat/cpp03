#include "../includes/ClapTrap.hpp"

int main( void )
{
	ClapTrap	Tom("Tom");
	std::cout << std::endl;

	Tom.attack("Jerry");
	Tom.attack("Jerry");
	Tom.attack("Jerry");
	std::cout << "Jerry is invincible..." << std::endl;
	std::cout << std::endl;

	Tom.takeDamage(9);
	Tom.beRepaired(1);
	Tom.beRepaired(2);
	Tom.beRepaired(5);
	Tom.beRepaired(10);
	Tom.beRepaired(20);
	Tom.beRepaired(50);
	Tom.beRepaired(100);
	Tom.beRepaired(150);
	Tom.beRepaired(150);
	Tom.attack("Jerry");
	std::cout << std::endl;
	
	Tom.takeDamage(999);
	Tom.beRepaired(1);
	Tom.attack("Jerry");
	std::cout << "Jerry has destroyed Tom..." << std::endl;
	std::cout << std::endl;

	{
		ClapTrap	TomCopy(Tom);
	}
	std::cout << std::endl;
	return (0);
}