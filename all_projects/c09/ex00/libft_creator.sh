rm libft.a
cc -Wall -Wextra -Werror -c ft_putchar.c
cc -Wall -Wextra -Werror -c ft_swap.c
cc -Wall -Wextra -Werror -c ft_putstr.c
cc -Wall -Wextra -Werror -c ft_strlen.c
cc -Wall -Wextra -Werror -c ft_strcmp.c
cc -shared ft_putchar.o ft_swap.o ft_putstr.c ft_strlen.o ft_strcmp.c -o libft.a
find . -name "*.o" -delete
