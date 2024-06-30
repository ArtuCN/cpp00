CC = g++
CFLAGS = -Wall -Wextra -Werror
DEBUG = -g
NAME = phonebook
SRC = phonebook.cpp contact.cpp main.cpp

FUCHSIA = '\033[0;95m'
CYAN = '\033[0;36m'

.PHONY: all clean fclean re
all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(DEBUG) $(SRC) -o $(NAME)
	@ echo $(CYAN)		"   ___            "$(NONE)
	@ echo $(FUCHSIA)	"  / __\ _     _   "$(NONE)
	@ echo $(CYAN)		" / /  _| |_ _| |_ "$(NONE)
	@ echo $(FUCHSIA)	"/ /__|_   _|_   _|"$(NONE)
	@ echo $(CYAN)		"\____/ |_|   |_|  "$(NONE)
clean:
	rm -f $(NAME)
re: clean all