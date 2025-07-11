#include "../Include/ClapTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ ClapTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "default constructor:" << std::endl;
	ClapTrap clap;
	std::cout << std::endl;

	std::cout << "constructor with name:" << std::endl;
	ClapTrap bob("Bob");
	std::cout << std::endl;

	std::cout << "copy constructor:" << std::endl;
	ClapTrap trap = clap;
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Attacking ~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "bob have " << bob.getEnergy() << " energy" << std::endl;
	bob.setAttack(3);
	bob.attack("neighbor");
	bob.setAttack(5);
	bob.attack("neighbor");
	std::cout << "bob have " << bob.getEnergy() << " energy" << std::endl;
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Taking damages ~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.takeDamage(5);
	bob.takeDamage(2);
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Repairing itself ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.beRepaired(5);
	bob.beRepaired(2);
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ ClapTrap destructor ~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
