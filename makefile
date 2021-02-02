#Archivo makefile para compilar todos los archivos (2)

#Obtener el ejecutable calcula.exe
calcula.exe: calcula.o binario.o
	gcc calcula.o binario.o -o calcula.exe -lm

#Compilacion de los modulos para generar los objetos
calcula.o: calcula.c
	gcc -c calcula.c

binario.o: binario.c
	gcc -c binario.c
