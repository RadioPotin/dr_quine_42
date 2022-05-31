CC=gcc -Wall -Werror -Wextra

SRC_COLLEEN=Colleen.c
DEST_COLLEEN=Colleen

SRC_GRACE=Grace.c
DEST_GRACE=Grace

SRC_SULLY=Sully.c
DEST_SULLY=Sully

OBJ_FILES=Colleen.o\
					Grace.o\
					Sully*.o

all: colleen grace sully

colleen: $(DEST_COLLEEN)
	$(CC) -o $(DEST_COLLEEN) $(SRC_COLLEEN)

$(DEST_COLLEEN): $(SRC_COLLEEN)
	@echo "Compiling COLLEEN"
	@$(CC) -o $@ -c $<

grace: $(DEST_GRACE)
	@echo "Compiling GRACE"
	$(CC) -o $(DEST_GRACE) $(SRC_GRACE)

sully: $(DEST_SULLY)
	@echo "Compiling SULLY"
	$(CC) -o $(DEST_SULLY) $(SRC_SULLY)

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(DEST_COLLEEN) $(DEST_GRACE) $(DEST_SULLY) Grace_kid.c Sully_*

re: fclean all
