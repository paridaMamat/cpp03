#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

ScavTrap :: ScavTrap():ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    
    std::cout << "\033[1;32mScavTrap\033[0m Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;
}

ScavTrap :: ScavTrap(std::string const name) : ClapTrap(name){
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;

    std::cout << "\033[1;32mScavTrap\033[0m Overload Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj){
    std::cout << "\033[1;32mScavTrap\033[0m Copy constructor called. " << obj._name << " has been copied." << std::endl;
    *this = obj;
}

ScavTrap::~ScavTrap(){
    std::cout << "\033[1;32mScavTrap\033[0m Destructor called. " << _name << " was destroyed." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj){
    std::cout << "\033[1;32mScavTrap\033[0m Copy assignment operator called" << std::endl;
    _name = obj._name + "Copy";
	_HitPoints = obj._HitPoints;
	_EnergyPoints = obj._EnergyPoints;
	_AttackDamage = obj._AttackDamage;
	return (*this);
}

void    ScavTrap ::attack(const std::string target){
    if (_HitPoints < 1 || _EnergyPoints < 1){
        std::cout << "\033[1;32mScavTrap\033[0m " << _name << " can’t do anything  !" << std::endl;
        return ;
    }
    std::cout << "\033[1;32m[ScavTrap]\033[0m " << _name << " attacks ";
    if (target.size() < 1)
        std::cout << "Unamed Target";
    else
        std::cout << target;
    _EnergyPoints--;
    std::cout << ", causing " << _AttackDamage << " point of damage ! now it left " << _EnergyPoints << " Energypoint." << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (_HitPoints < 1 || _EnergyPoints < 1){
        std::cout << "\033[1;32mScavTrap\033[0m " << _name << " can’t do anything  !" << std::endl;
        return ;
    }
	else
		std::cout << "\033[1;32mScavTrap\033[0m " << _name << "  is now in Gate keeper mode. !!" << std::endl;
}
