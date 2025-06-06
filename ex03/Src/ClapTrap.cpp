#include "../Include/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("no_name"), _hp(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap( const ClapTrap &toCopy )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = toCopy;
}

// Constructor with name
ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor with the name " << _name << " called" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}



// Operators overload
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_energy = src._energy;
	_attack = src._attack;
	return *this;
}



// Attack something
void ClapTrap::attack( const std::string& target )
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack, is dead" << std::endl;
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack, not enough energy" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

// Take damages
void ClapTrap::takeDamage( unsigned int amount )
{
	unsigned int	old_hp = _hp;

	if (_hp - amount > 0)
		_hp -= amount;
	else
		_hp = 0;
	std::cout << "ClapTrap " << _name << " take " << amount << " points of damage, ( " << old_hp << "hp -> " << _hp << "hp )" << std::endl;
}

// Repair itself
void ClapTrap::beRepaired( unsigned int amount )
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself, is dead" << std::endl;
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself, not enough energy" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ClapTrap " << _name << " repair itself ( " << _hp << "hp -> " << _hp + amount << "hp )" << std::endl;
	_hp += amount;
}



// Set
void	ClapTrap::setName( std::string name )
{
	std::cout << "set name to " << name << std::endl;
	_name = name;
}

void	ClapTrap::setHp( unsigned int hp )
{
	std::cout << "set hp to " << hp << std::endl;
	_hp = hp;
}

void	ClapTrap::setEnergy( unsigned int energy )
{
	std::cout << "set energy to " << energy << std::endl;
	_energy = energy;
}

void	ClapTrap::setAttack( unsigned int attack )
{
	std::cout << "set attack to " << attack << std::endl;
	_attack = attack;
}



// Get
std::string		ClapTrap::getName()
{
	return ( _name );
}

unsigned int		ClapTrap::getHp()
{
	return ( _hp );
}

unsigned int		ClapTrap::getEnergy()
{
	return ( _energy );
}

unsigned int		ClapTrap::getAttack()
{
	return ( _attack );
}
