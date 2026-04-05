CC = gcc
CFLAGS = -Iinclude -Wall -Wextra

SRC = $(wildcard src/*.c) $(wildcard src/*/*.c)
TESTS = tests/test_runner.c tests/test_parser.c tests/test_validator.c

.PHONY: all test clean

all:
	$(CC) $(SRC) $(CFLAGS) -o analyzer

test:
	$(CC) $(TESTS) $(SRC) $(CFLAGS) -o test_runner
	./test_runner

clean:
	rm -f analyzer test_runner