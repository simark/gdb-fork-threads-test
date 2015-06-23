CFLAGS=-pthread -g3 -O0
LDFLAGS=-pthread

test: test.o
test.o: test.c

.PHONY: clean
clean:
	rm -f *.o test
