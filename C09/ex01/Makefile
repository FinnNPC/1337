NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I includes
SRC_DIR     = srcs
SRC         = $(wildcard $(SRC_DIR)/*.c)
OBJS        = $(SRC:.c=.o)

all: $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
