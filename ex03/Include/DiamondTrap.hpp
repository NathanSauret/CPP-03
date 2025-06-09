#ifndef DIAMONTRAP_HPP
#define DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		// Constructors
		DiamondTrap();
		DiamondTrap( const DiamondTrap &copy );
		DiamondTrap( std::string name );

		// Destructor
		virtual	~DiamondTrap();

		// Operators overload
		DiamondTrap	&operator=(const DiamondTrap &src);

		// Class functions
		void	attack(const std::string &target);
		void	whoAmI(void);
};

#endif