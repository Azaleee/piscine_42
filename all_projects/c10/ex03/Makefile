CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = ft_hexdump
SRCSDIR = srcs
OBJSDIR = srcs
SRCS = srcs/ft_hexdump.c srcs/open_file.c srcs/print_func.c srcs/render.c srcs/ft_strcmp.c srcs/ft_strcat.c srcs/ft_strncat.c
OBJS = $(SRCS:$(SRCSDIR)/%.c=$(SRCSDIR)/%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $^

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c 
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: clean fclean all re
