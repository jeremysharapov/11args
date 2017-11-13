all: parseargs.c
	gcc parseargs.c -o parse
run: all
	./parse
clean:
	rm -f *~
	rm -f *.o
