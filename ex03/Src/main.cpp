#include "../Include/DiamondTrap.hpp"

int	main( void )
{
	std::cout << "~~~~~~~~~~~~~~~ DiamondTrap constructor ~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std::cout << "\t~~~ default constructor ~~~" << std::endl;
	DiamondTrap diamond;
	std::cout << std::endl;

	std::cout << "\t~~~ constructor with name ~~~" << std::endl;
	DiamondTrap bob("bob");
	std::cout << std::endl;

	std::cout << "\t~~~ copy constructor ~~~" << std::endl;
	DiamondTrap trap = diamond;
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Show default values ~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std::cout << "hp: " << bob.getHp() << std::endl;
	std::cout << "energy: " << bob.getEnergy() << std::endl;
	std::cout << "attack: " << bob.getAttack() << std::endl;
	
	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Testing ClapTrap ~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	
	std:: cout << "\t~~~ attack ~~~" << std::endl;
	std::cout << "\tbob have " << bob.getEnergy() << " energy" << std::endl;
	std::cout << "\t";
	bob.attack("random guy");
	std::cout << "\tbob have " << bob.getEnergy() << " energy" << std::endl;
	std::cout << std::endl;

	std::cout << "\t~~~ taking damages ~~~" << std::endl;;
	std::cout << "\t";
	bob.takeDamage(5);
	std::cout << "\t";
	bob.takeDamage(2);
	std::cout << std::endl;

	std::cout << "\t~~~ repairing itself ~~~" << std::endl;;
	std::cout << "\t";
	bob.beRepaired(5);
	std::cout << "\t";
	bob.beRepaired(2);
	std::cout << std::endl;

	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Testing ScavTrap ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std:: cout << "\t~~~ guard gate  ~~~" << std::endl;
	std::cout << "\t";
	bob.guardGate();

	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Testing ScavTrap ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std:: cout << "\t~~~ high five ~~~" << std::endl;
	std::cout << "\t";
	bob.highFivesGuys();

	std::cout << std::endl << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ Testing DiamondTrap ~~~~~~~~~~~~~~~~" << std::endl << std::endl;

	std:: cout << "\t~~~ who am I ~~~" << std::endl;
	bob.whoAmI();

	std::cout << std::endl << std::endl;



	std::cout << "~~~~~~~~~~~~~~~ DiamondTrap destructor ~~~~~~~~~~~~~" << std::endl << std::endl;
	return (0);
}
