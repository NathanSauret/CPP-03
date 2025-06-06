#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../Include/ClapTrap.hpp"

class FragTrap: public ClapTrap
{
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