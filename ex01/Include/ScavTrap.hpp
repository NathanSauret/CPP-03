#ifndef SCAVTRAP_HPP
#define SCAVTRAV_HPP

#include "../Include/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap( const ScavTrap &copy );
		ScavTrap( std::string name );

		// Destructor
		virtual	~ScavTrap();

		// Operator overload
		ScavTrap	&operator=( const ScavTrap &src );

		// Class member functions
		void	attack( const std::string &target );
		void	guardGate( void );
};

#endif