CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = ft_cat
SRCSDIR = srcs
OBJSDIR = srcs
SRCS = srcs/cat.c srcs/ft_putstr.c
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
