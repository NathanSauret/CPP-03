#include "../Include/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	_hp = defaultHp;
	_energy = defaultEnergy;
	_attack = defaultAttack;
	std::cout << "FragTrap default constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap()
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = toCopy;
}

// Constructor with name
FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	_hp = defaultHp;
	_energy = defaultEnergy;
	_attack = defaultAttack;
	std::cout << "FragTrap constructor with the name " << _name << " called" << std::endl;
}

// Destructors
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << _name << std::endl;
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
