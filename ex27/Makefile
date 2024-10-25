PROJ_NAME = ft_display_file

C_SOURCE = main.c

H_SOURCE = 

OBJ = $(C_SOURCE:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) $(CC_FLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(PROJ_NAME)