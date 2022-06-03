SRC_COLLEEN += Colleen.s
SRC_GRACE += Grace.s
SRC_SULLY += Sully.s

OBJ_COLLEEN = $(SRC_COLLEEN:%.s=%.o)
OBJ_GRACE = $(SRC_GRACE:%.s=%.o)
OBJ_SULLY = $(SRC_SULLY:%.s=%.o)

NAME = dr_quine

COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

NASM=nasm
FLAGS_NASM=-g -f elf64
N=$(NASM) $(FLAGS_NASM)

GCC=gcc
GCC_FLAGS=-Wall -Werror -Wextra
CC=$(GCC) $(GCC_FLAGS)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.s
	$(N) $< -o $@

$(NAME): $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): $(OBJ_COLLEEN)
	@echo "\033[32mCompiling COLLEEN\033[0m"
	$(CC) -o $@ $<

$(GRACE): $(OBJ_GRACE)
	@echo "\033[32mCompiling GRACE\033[0m"
	$(CC) -ggdb -o $@ $<

$(SULLY): $(OBJ_SULLY)
	@echo "\033[32mCompiling SULLY\033[0m"
	$(CC) -o $@ $<

clean:
	@rm -f $(OBJ_COLLEEN) $(OBJ_GRACE) $(OBJ_SULLY)
	@echo "Cleaning objects"

fclean: clean
	@rm -f $(COLLEEN) $(GRACE) $(SULLY)
	@rm -f Grace_kid.s Sully_*
	@echo "Cleaning all"

re: fclean all
