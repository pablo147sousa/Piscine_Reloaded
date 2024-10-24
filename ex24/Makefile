PROJ_NAME=libft.a

C_SOURCE=$(./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c)

H_SOURCE=$(./includes/libft.h)

OBJ=$(C_SOURCE:.c=.o)

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

RM=rm -rf

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ) 
	ar rcs $@ $^

$(OBJ): $(C_SOURCE)
	$(CC) $< $(CC_FLAGS) -I $(H_SOURCE) -c $(C_SOURCE) -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(PROJ_NAME)

re: fclean all
