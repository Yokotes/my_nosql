CC=gcc
CFLAGS=-Wextra -Wall -pedantic

main: src/main.c
	${CC} ${CFLAGS} src/main.c src/entry.c
