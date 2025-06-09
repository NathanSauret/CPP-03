#ifndef SCAVTRAP_HPP
#define SCAVTRAV_HPP

#include "../Include/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	protected:
		static const int defaultHp = 100;
		static const int defaultEnergy = 50;
		static const int defaultAttack = 20;

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