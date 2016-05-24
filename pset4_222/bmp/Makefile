#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

all: copy bmp

copy: copy.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o copy copy.c  -lcs50 -lm

bmp: bmp.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o bmp bmp.h

clean:
	rm -f *.o a.out core copy bmp