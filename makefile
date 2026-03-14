NAME = csv_program

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = 03-tests/main.c 01-src/CSV_module/*.c

OBJ = $(SRC:.c=.o)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

all:
	$(NAME)