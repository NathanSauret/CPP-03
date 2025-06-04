#include "../Include/ClapTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ ClapTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;
	ClapTrap clap;
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ Attacking ~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "clap have " << clap.getEnergy() << " energy" << std::endl;
	clap.setAttack(3);
	clap.attack("neighbor");
	clap.setAttack(5);
	clap.attack("neighbor");
	std::cout << "clap have " << clap.getEnergy() << " energy" << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ Taking damages ~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	clap.takeDamage(5);
	clap.takeDamage(2);
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ Repairing itself ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	clap.beRepaired(5);
	clap.beRepaired(2);
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "~~~~~~~~~~~~~~~ ClapTrap destructor ~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
