NAME = csv_program

CC = cc
CFLAGS = -Wall -Wextra -Werror -I include 

SRC = 03-tests/main.c 01-src/CSV_module/*.c
OBJ =(SRC:.C=.O)

