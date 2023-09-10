CFLAGS=-O0 -std=c11 -Wall -Wextra -Werror -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS=-lm
EXECUTAVEL=MeuProg

$(EXECUTAVEL): main.o ordenacao.o heap.o
	gcc main.o ordenacao.o heap.o $(LIBS) -o $(EXECUTAVEL)
main.o: main.c
	gcc $(CFLAGS) -c main.c 
ordenacao.o: ordenacao.c
	gcc $(CFLAGS) -c ordenacao.c
heap.o: heap.c
	gcc $(CFLAGS) -c heap.c
limpa:
	rm -rf *.o $(EXECUTAVEL)
memcheck: $(EXECUTAVEL)
	valgrind --tool=memcheck --leak-check=full ./$(EXECUTAVEL)

run: $(EXECUTAVEL)
	./$(EXECUTAVEL)