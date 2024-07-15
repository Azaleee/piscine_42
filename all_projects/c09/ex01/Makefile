CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = libft.a
SRCSDIR = srcs
OBJSDIR = srcs
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:$(SRCSDIR)/%.c=$(SRCSDIR)/%.o) #remplacer lextension de srcs en .o

all: $(LIB)

$(NAME): $(OBJS)
	ar rcs $@ $^ #nom de la cible (libft) - liste des dependqnces fichier obj



clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_A)
