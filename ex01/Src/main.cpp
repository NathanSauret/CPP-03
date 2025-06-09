#include "../Include/ClapTrap.hpp"
#include "../Include/ScavTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ ScavTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "default constructor:" << std::endl;
	ScavTrap scav;
	std::cout << std::endl;

	std::cout << "constructor with name:" << std::endl;
	ScavTrap bob("bob");
	std::cout << std::endl;

	std::cout << "copy constructor:" << std::endl;
	ScavTrap trap = scav;
	std::cout << std::endl << std::endl << std::endl;


	
	std::cout << "~~~~~~~~~~~~~~~ Show default values ~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std::cout << "hp: " << bob.getHp() << std::endl;
	std::cout << "energy: " << bob.getEnergy() << std::endl;
	std::cout << "attack: " << bob.getAttack() << std::endl;
	
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Attacking ~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "bob have " << bob.getEnergy() << " energy" << std::endl;
	bob.attack("neighbor");
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



	std::cout << "~~~~~~~~~~~~~~~ Guard gate ~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	bob.guardGate();
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ ScavTrap destructor ~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
