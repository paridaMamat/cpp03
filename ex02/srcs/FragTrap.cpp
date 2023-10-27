#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
	std::cout << "\033[1;31m[FragTrap]\033[0m Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "\033[1;38;5;39mFragTrap\033[0m Overload Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
    std::cout << "\033[1;38;5;39mFragTrap\033[0m Copy constructor called. " << obj._name << "has been copied." <<std::endl;
    *this = obj;
}

FragTrap::~FragTrap(){
    std::cout << "\033[1;38;5;39mFragTrap\033[0m Destructor called. " << _name << " was distroyed." <<std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj){
    std::cout << "\033[1;32mFragTrap\033[0m Copy assignment operator called" << std::endl;
    _name = obj._name + "Copy";
	_HitPoints = obj._HitPoints;
	_EnergyPoints = obj._EnergyPoints;
	_AttackDamage = obj._AttackDamage;
	return (*this);
}
void	FragTrap::highFivesGuys( void )
{
	if (_HitPoints < 1 || _EnergyPoints < 1)
		std::cout << "\033[1;32mFragTrap\033[0m " << _name << " can’t do anything  !" << std::endl;
	else
	{
		std::cout << "\033[1;31mFragTrap\033[0m " << _name << " says: HIGH FIVES !! \\(^_^)\n";
        std::cout << "   \n";
        std::cout << "  \\  ✋   /  \n";
	}
}
