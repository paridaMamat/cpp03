#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>
#include<string>
class ClapTrap
{
   private :

   protected :
   std::string  _name;
   int _HitPoints;
   int _EnergyPoints;
   int _AttackDamage;

   public:
   ClapTrap();
   ClapTrap(std::string const name);
   ClapTrap(ClapTrap const &obj);
   ClapTrap    &operator=(ClapTrap const &obj);
   ~ClapTrap();

   void    attack(const std::string& target);
   void    takeDamage(unsigned int amount);
   void    beRepaired(unsigned int amount);
};
 
#endif