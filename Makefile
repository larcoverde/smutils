CC = gcc #compiler
CFLAGS = -Wall -Wextra # warnings

all:
	@echo Run \'make install\' to install smutils.
install:
# IMPORTANT
# i know im doing this the wrong way, but its all i know about makefile at this moment.
# later ill improve it.
	$(CC) $(CFLAGS) -o smu-clear src/smu-clear.c
	$(CC) $(CFLAGS) -o smu-getmem src/smu-getmem.c
	$(CC) $(CFLAGS) -o smu-help src/smu-help.c
	$(CC) $(CFLAGS) -o smu-ls src/smu-ls.c

