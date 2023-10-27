#include "../includes/ScavTrap.hpp"

int main( void )
{
	ClapTrap	Tom("Tom");
	std::cout << std::endl;

	ScavTrap	SpongeBob("SpongeBob");
	std::cout << std::endl;

	SpongeBob.attack("Squidward ");
	SpongeBob.attack("Squidward ");
	SpongeBob.attack("Squidward ");
	std::cout << "This damages is insignificant for Squidward ..." << std::endl;
	std::cout << std::endl;

	SpongeBob.takeDamage(99);
	SpongeBob.beRepaired(10);
	SpongeBob.beRepaired(20);
	SpongeBob.beRepaired(50);
	SpongeBob.beRepaired(100);
	SpongeBob.beRepaired(200);
	SpongeBob.beRepaired(500);
	SpongeBob.beRepaired(1000);
	SpongeBob.beRepaired(1500);
	SpongeBob.beRepaired(1500);
	SpongeBob.attack("Squidward ");
	std::cout << std::endl;
	
	SpongeBob.guardGate();
	std::cout << std::endl;

	SpongeBob.takeDamage(9999);
	SpongeBob.beRepaired(1);
	SpongeBob.attack("Squidward ");
	std::cout << "Squidward  has destroyed SpongeBob again..." << std::endl;
	std::cout << std::endl;

	{
		ClapTrap	TomCopy(Tom);
	}
		std::cout << std::endl;
	{
		ScavTrap	SpongeBobCopy(SpongeBob);
	}

	std::cout << std::endl;
	return (0);
}