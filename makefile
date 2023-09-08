CFLAGS=-O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS=-lm
EXECUTAVEL=MeuProg

$(EXECUTAVEL): main.o ordenacao.o
	gcc main.o ordenacao.o $(LIBS) -o $(EXECUTAVEL)
main.o: main.c
	gcc $(CFLAGS) -c main.c 
ordenacao.o: ordenacao.c
	gcc $(CFLAGS) -c ordenacao.c  
limpa:
	rm -rf *.o $(EXECUTAVEL)

memcheck: $(EXECUTAVEL)
	valgrind --tool=memcheck --leak-check=full ./$(EXECUTAVEL)

run: $(EXECUTAVEL)
	./$(EXECUTAVEL)