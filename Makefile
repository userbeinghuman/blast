DEBUG = -g

blast: main.o
	gcc main.o $(DEBUG) -l raylib -o bin/blast

main.o: src/main.c
	gcc -c $(DEBUG) src/main.c

.PHONY: clean
clean:
	rm *.o bin/blast