#include "../Include/DiamondTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ DiamondTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "default constructor:" << std::endl;
	DiamondTrap diamond;
	std::cout << std::endl;

	std::cout << "constructor with name:" << std::endl;
	DiamondTrap bob("bob");
	std::cout << std::endl;

	std::cout << "copy constructor:" << std::endl;
	DiamondTrap trap = diamond;
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Giving high five ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.highFivesGuys();
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Taking damages ~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.takeDamage(5);
	bob.takeDamage(2);
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Repairing itself ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.beRepaired(5);
	bob.beRepaired(2);
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ DiamondTrap destructor ~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
