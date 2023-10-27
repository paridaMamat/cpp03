#include"../includes/ClapTrap.hpp"

ClapTrap :: ClapTrap():_name("Unamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy constructor called. " << obj._name << " has been copied." << std::endl;
    *this = obj;
}
ClapTrap    &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _name = obj._name + "Copy";
    _HitPoints = obj._HitPoints;
    _EnergyPoints = obj._EnergyPoints;
    _AttackDamage = obj._AttackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called. " << _name << " was distroyed." << std::endl;
}

ClapTrap :: ClapTrap(std::string const name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Overload Default constructor called" << std::endl;
    std::cout << "name : [" << _name << "] | hitPoints : [" << _HitPoints << "] | energyPoints : [" << _EnergyPoints << "] | attackDamage : [" << _AttackDamage << "]" << std::endl;
    if (name.size() < 1)
        _name = "Unamed";
}

void    ClapTrap::attack(const std::string& target){
    if (_HitPoints < 1 || _EnergyPoints < 1){
        std::cout << "ClapTrap " << _name << " can’t do anything  !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks ";
    if (target.size() < 1)
        std::cout << "Unamed Target";
    else
        std::cout << target;
    std::cout << ", causing " << _AttackDamage << " point of damage !" << std::endl;
    _EnergyPoints--;
    std::cout << "now it left " << _EnergyPoints << " Energypoint." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (_HitPoints < 1 || _EnergyPoints < 1){
        std::cout << "ClapTrap " << _name << " can’t do anything  !" << std::endl;
        return ;
    }
    _HitPoints -= amount;
    std::cout << _name << " takes " << amount << " damage and it has " << _HitPoints << " hit point ." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (_HitPoints < 1 || _EnergyPoints < 1){
        std::cout << "ClapTrap " << _name << " can’t do anything  !" << std::endl;
        return ;
    }
    _HitPoints += amount;
    _EnergyPoints --;
    std::cout << "ClapTrap " << _name << " has been repaired of " << amount << " hit point. It has now " << _HitPoints << " Hit point and " << _EnergyPoints << " Energypoint left."<< std::endl;
}
