NAME = account
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o	: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

FUCHSIA = '\033[0;95m'
CYAN = '\033[0;36m'
NONE = '\033[0m'


$(NAME) : $(OBJ)
	@$(CPP) $(FLAGS) $(OBJ) -o $(NAME)
		@ echo $(CYAN)          "   ___            "$(NONE)
		@ echo $(FUCHSIA)       "  / __\ _     _   "$(NONE)
		@ echo $(CYAN)          " / /  _| |_ _| |_ "$(NONE)
		@ echo $(FUCHSIA)       "/ /__|_   _|_   _|"$(NONE)
		@ echo $(CYAN)          "\____/ |_|   |_|  "$(NONE)
		@ echo $(FUCHSIA)       "                   "$(NONE)
			
	rm -rf $(OBJ)

all	: $(NAME)

clean :
	@rm -rf $(NAME)
re: clean all

.PHONY : all clean fclean re