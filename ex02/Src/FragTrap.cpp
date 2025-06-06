#include "../Include/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_attack = 50;
	std::cout << "FragTrap default constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap()
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

// Constructor with name
FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	_hp = 100;
	_energy = 50;
	_attack = 50;
	std::cout << "FragTrap constructor with the name " << _name << " called" << std::endl;
}

// Destructors
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}



// Operator overload
FragTrap &FragTrap::operator=( const FragTrap &src )
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_energy = src._energy;
	_attack = src._attack;
	return *this;
}



// High five
void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " say 'high five ? 🤚'" << std::endl;
}
