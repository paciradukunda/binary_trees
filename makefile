all: test

test: *.c
	gcc -Wall -Wextra -Werror -pedantic *.c -o test

.PHONY: clean
clean:
	rm -f test