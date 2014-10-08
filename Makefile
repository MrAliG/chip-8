EXE=jeu
CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic
SRC=src/update_tab.c src/print_tab.c src/build_tab.c src/main.c
OBJ=$(SRC:.c=.o)
TAR=jeu_de_la_vie
DIR=/usr/bin

-include makefile.rules

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXE) $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ) $(EXE) $(TAR).tar.bz2

distclean: clean
	rm -f makefile.rules

export:
	git archive HEAD --prefix=$(TAR)/ | bzip2 > $(TAR).tar.bz2

.PHONY: all clean distclean export
