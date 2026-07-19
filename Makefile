CC = gcc #compiler
CFLAGS = -Wall -Wextra # warnings

all:
	@echo Run \'make install\' to install smutils.
install:
# IMPORTANT
# i know im doing this the wrong way, but its all i know about makefile at this moment.
# later ill improve it.
	$(CC) $(CFLAGS) -o smu-clear src/smu-clear.c
	@mv sclear /usr/local/bin/

	$(CC) $(CFLAGS) -o smu-getmem src/smu-getmem.c
	@mv sgetmem /usr/local/bin/

	$(CC) $(CFLAGS) -o smu-help src/smu-help.c
	@mv shelp /usr/local/bin/

	$(CC) $(CFLAGS) -o smu-ls src/smu-ls.c
	@mv sls /usr/local/bin/

	$(CC) $(CFLAGS) -o smu-mkfile src/smu-mkfile.c
	@mv smkfile /usr/local/bin/

	$(CC) $(CFLAGS) -o smu-mkdir src/smu-mkdir.c
	@mv smkdir /usr/local/bin/

	$(CC) $(CFLAGS) -o scp src/smu-scp.c
	@mv scp /usr/local/bin/

