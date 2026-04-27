_name = DiamondTrap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \
	  DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(_name)

$(_name): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(_name)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(_name)

re: fclean all

.PHONY:		all clean fclean re