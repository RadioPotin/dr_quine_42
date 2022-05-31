NASM=nasm -f elf64
CC=gcc -Wall -Werror -Wextra

SRC_COLLEEN=Colleen.s
DEST_COLLEEN=Colleen

SRC_GRACE=Grace.s
DEST_GRACE=Grace

SRC_SULLY=Sully.s
DEST_SULLY=Sully

OBJ_FILES=Colleen.o\
					Grace.o\
					Sully*.o

all: colleen grace sully

colleen: $(DEST_COLLEEN)
	@echo "Compiling COLLEEN"
	$(CC) -o $(DEST_COLLEEN) $(SRC_COLLEEN)

grace: $(DEST_GRACE)
	@echo "Compiling GRACE"
	$(CC) -o $(DEST_GRACE) $(SRC_GRACE)

sully: $(DEST_SULLY)
	@echo "Compiling SULLY"
	$(CC) -o $(DEST_SULLY) $(SRC_SULLY)

clean:
	@echo "Cleaning objects"
	rm -rf $(OBJ_FILES)

fclean: clean
	@echo "Cleaning all"
	rm -rf $(DEST_COLLEEN) $(DEST_GRACE) $(DEST_SULLY) Grace_kid.s Sully_*

re: fclean all
