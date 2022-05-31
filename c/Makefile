SRC_COLLEEN += Colleen.c
SRC_GRACE += Grace.c
SRC_SULLY += Sully.c

OBJ_COLLEEN = $(SRC_COLLEEN:%.c=%.o)
OBJ_GRACE = $(SRC_GRACE:%.c=%.o)
OBJ_SULLY = $(SRC_SULLY:%.c=%.o)

NAME = dr_quine

COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

GCC = gcc
FLAGS_GCC = -Wall -Wextra -Werror
CC = $(GCC) $(FLAGS_GCC)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	@$(CC) -c -o $@ $^

$(NAME): $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): $(OBJ_COLLEEN)
	@echo "Compiling COLLEEN"
	$(CC) -o $@ $^

$(GRACE): $(OBJ_GRACE)
	@echo "Compiling GRACE"
	$(CC) -o $@ $^

$(SULLY): $(OBJ_SULLY)
	@echo "Compiling SULLY"
	$(CC) -g -o $@ $^

clean:
	@rm -f $(OBJ_COLLEEN) $(OBJ_GRACE) $(OBJ_SULLY)
	@echo "Cleaning objects"

fclean: clean
	@rm -f $(COLLEEN) $(GRACE) $(SULLY)
	@rm -f Grace_kid.c Sully_*
	@echo "Cleaning all"

re: fclean all
