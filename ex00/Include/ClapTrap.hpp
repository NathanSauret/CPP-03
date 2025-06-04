#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define BLUE ""

class ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hp;
		unsigned int			_energy;
		unsigned int			_attack;

	public:
		ClapTrap();
		~ClapTrap();

		// Class member functions
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		// Set
		void		setName( std::string name );
		void		setHp( unsigned int hp );
		void		setEnergy( unsigned int energy );
		void		setAttack( unsigned int attack );

		// Get
		std::string		getName();
		unsigned int	getHp();
		unsigned int	getEnergy();
		unsigned int	getAttack();
};

#endif