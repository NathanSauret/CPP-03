#include "../Include/DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap( "no_name_clap_trap" )
{
	_name = "no_name";
	_hp = FragTrap::defaultHp;
	_energy = ScavTrap::defaultEnergy;
	_attack = FragTrap::defaultAttack;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap( const DiamondTrap &toCopy ) : ClapTrap( toCopy ), ScavTrap(), FragTrap()
{
	*this = toCopy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

// Constructor with name
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_trap" )
{
	_name = name;
	_hp = FragTrap::defaultHp;
	_energy = ScavTrap::defaultEnergy;
	_attack = FragTrap::defaultAttack;
	std::cout << "DiamondTrap constructor with the name " << _name << " called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "FragTrap destructor called for " << _name << std::endl;
}

// Operators overload
DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &src )
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	_name = src._name + "_clap_trap";
	_hp = src._hp;
	_energy = src._energy;
	_attack = src._attack;
	return *this;
}

// Use ScavTrap's attack
void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

// Gives it's DiamondTrap and ClapTrap names
void	DiamondTrap::whoAmI()
{
	std::cout << "\t| DiamondTrap name : " << _name << std::endl;
	std::cout << "\t| ClapTrap name : " << ClapTrap::_name << std::endl;
}
