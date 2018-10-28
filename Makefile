

objects = collections.o list.o system.o

all: list

list: $(objects) 
	$(CC) -std=c99 -I ./lib  $^ -o $@ -lm


collections.o: collections.c collections.h
	$(CC) -c $^ 

linked_list.o: list.c list.h
	$(CC) -c $^

system.o: system.c system.h
	$(CC) -c $^


clean: 
	rm -f list.h.gch collections.h.gch list.o collections.o system.o system.h.gch
