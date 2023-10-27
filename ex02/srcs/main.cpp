#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main( void )
{
	ClapTrap	Tom("Tom");
	std::cout << std::endl;

	ScavTrap	SpongeBob("SpongeBob");
	std::cout << std::endl;

	FragTrap	Felix("Felix");
	std::cout << std::endl;

	Felix.attack("Jerry");
	Felix.attack("Jerry");
	Felix.attack("Jerry");
	std::cout << "Jerry is tough..." << std::endl;
	std::cout << std::endl;

	Felix.takeDamage(99);
	Felix.beRepaired(100);
	Felix.beRepaired(200);
	Felix.beRepaired(500);
	Felix.beRepaired(1000);
	Felix.beRepaired(2000);
	Felix.beRepaired(5000);
	Felix.beRepaired(10000);
	Felix.beRepaired(15000);
	Felix.beRepaired(15000);
	Felix.attack("Jerry");
	std::cout << std::endl;
	
	SpongeBob.guardGate();
	std::cout << std::endl;

	Felix.highFivesGuys();
	std::cout << std::endl;

	Felix.takeDamage(99999);
	SpongeBob.takeDamage(99999);
	Felix.beRepaired(1);
	SpongeBob.attack("Jerry");
	std::cout << std::endl;

	{
		ClapTrap	TomCopy(Tom);
	}
		std::cout << std::endl;
	{
		ScavTrap	SpongeBobCopy(SpongeBob);
	}
		std::cout << std::endl;
	{
		FragTrap	FelixCopy(Felix);
	}
	std::cout << std::endl;
	return (0);
}