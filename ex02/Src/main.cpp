#include "../Include/FragTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ FragTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "default constructor:" << std::endl;
	FragTrap frag;
	std::cout << std::endl;

	std::cout << "constructor with name:" << std::endl;
	FragTrap bob("bob");
	std::cout << std::endl;

	std::cout << "copy constructor:" << std::endl;
	FragTrap trap = frag;
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



	std::cout << "~~~~~~~~~~~~~~~ FragTrap destructor ~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
