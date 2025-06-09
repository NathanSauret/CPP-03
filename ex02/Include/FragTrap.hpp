#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../Include/ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	protected:
		static const int defaultHp = 100;
		static const int defaultEnergy = 100;
		static const int defaultAttack = 30;

	public:
		// Constructors
		FragTrap();
		FragTrap( const FragTrap &copy );
		FragTrap( std::string name );

		// Destructor
		virtual	~FragTrap();

		// Operator overload
		FragTrap	&operator=( const FragTrap &src );

		// Class member functions
		void	attack( const std::string &target );
		void	highFivesGuys( void );
};

#endif