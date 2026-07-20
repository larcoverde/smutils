CC = gcc #compiler
CFLAGS = -Wall -Wextra # warnings

all:
	@echo Run \'make install\' to install smutils.
install:
# IMPORTANT
# i know im doing this the wrong way, but its all i know about makefile at this moment.
# later ill improve it.
	$(CC) $(CFLAGS) -o sclear src/smu-clear.c
	@mv sclear /usr/local/bin/

	$(CC) $(CFLAGS) -o smem src/smu-mem.c
	@mv smem /usr/local/bin/

	$(CC) $(CFLAGS) -o shelp src/smu-help.c
	@mv shelp /usr/local/bin/

	$(CC) $(CFLAGS) -o sls src/smu-ls.c
	@mv sls /usr/local/bin/

	$(CC) $(CFLAGS) -o smkfile src/smu-mkfile.c
	@mv smkfile /usr/local/bin/

	$(CC) $(CFLAGS) -o smkdir src/smu-mkdir.c
	@mv smkdir /usr/local/bin/

	$(CC) $(CFLAGS) -o scp src/smu-cp.c
	@mv scp /usr/local/bin/

	$(CC) $(CFLAGS) -o sview src/smu-view.c
	@mv sview /usr/local/bin/

