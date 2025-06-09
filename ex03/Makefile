NAME 	= diamondtrap
CPP		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

SRC =	Src/main.cpp	\
		Src/ClapTrap.cpp	\
		Src/ScavTrap.cpp	\
		Src/FragTrap.cpp	\
		Src/DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) -o $(NAME) $(CFLAGS) $(OBJ)
	@clear
	@echo "Compilation done!"

clean:
	@rm -f $(OBJ)
	@clear
	@echo "Cleaning done!"

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@rm -rf
	@clear
	@echo "Full cleaning done!"

re: fclean all
	@clear
	@echo "Re:Zero - Re:Clean and compile again."

.PHONY: all clean fclean re