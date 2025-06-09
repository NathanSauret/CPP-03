#include "../Include/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
	_hp = defaultHp;
	_energy = defaultEnergy;
	_attack = defaultAttack;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap()
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = toCopy;
}

// Constructor with name
ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	_hp = defaultHp;
	_energy = defaultEnergy;
	_attack = defaultAttack;
	std::cout << "ScavTrap constructor with the name " << _name << " called" << std::endl;
}

// Destructors
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << _name << std::endl;
}



// Operator overload
ScavTrap &ScavTrap::operator=( const ScavTrap &src )
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_energy = src._energy;
	_attack = src._attack;
	return *this;
}



// Attack something
void ScavTrap::attack( const std::string& target )
{
	if (_hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack, is dead" << std::endl;
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack, not enough energy" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

// Gate keeper mode
void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}
