hello.out:hello.c max.o min.o
	gcc -c hello.c max.o min.o -o hello.out
max.o:max.c
	gcc -c max.c -o max.o
min.o:min.c
	gcc -c min.c -o min.o
