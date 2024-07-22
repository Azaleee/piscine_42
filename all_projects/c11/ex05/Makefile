CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = do_op
SRCSDIR = srcs
OBJSDIR = srcs
SRCS = srcs/do-op.c srcs/ft_strprint.c srcs/check_operator.c srcs/calcul.c srcs/putnbr.c
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
