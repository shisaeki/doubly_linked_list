NAME   = doubly_linked_list
SRCS   = main.c doubly_linked_list.c
CC     = cc
CFLAGS = -Wall -Wextra -Werror

all: 
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) 

fclean:
	rm -f $(NAME)

re: fclean all

