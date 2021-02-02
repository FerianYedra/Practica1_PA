/**
 * @file calcula.c
 * @brief Este programa tiene la función de realizar las operaciones suma (+), resta (-),
 * 	  multiplicación (x), división (/) y exponencial (^) con dos números ingresados
 * 	  desde la consola de comandos (uno binario y el otro hexadecimal) de la siguiente
 * 	  manera:
 * 	  (opción1) (operación) (opción), Ejemplo:
 * 	  10010 + 0x3F
 * 	  El programa devuelve el resultado de la operación en decimal y octal, también
 * 	  devuelve 1 en caso de que no se hayan introducido correctamente los datos.
 * 	  
 * @author Nancy Melina Rodríguez y Fernando Ian Yedra
 * @date 31/01/2020
 */

#include "calcula.h"

extern int binario(int op1, char *numBin);

int main(int argc, char *argv[]){
	int op1, op2, dec;
	float res;

	sscanf(argv[1], "%i", &op1);
	sscanf(argv[3], "%i", &op2);

	op1=strlen(argv[1]);
	dec=binario(op1,argv[1]);

	switch(argv[2][0]){
	  case '+':
              printf("El resultado en decimal es %i\n", dec+op2);
              printf("El resultado en octal es %o\n", dec+op2);
              break;
          case '-':
              printf("El resultado en decimal es %i\n", dec-op2);
              printf("El resultado en octal es %o\n", dec-op2);
              break;
          case 'x':
              printf("El resultado en decimal es %i\n", dec*op2);
              printf("El resultado en octal es %o\n", dec*op2);
              break;
          case '/':
              res=dec/op2;
              printf("El resultado aproximado en decimal es %i\n", (int)res);
              printf("El resultado aproximado en octal es %o\n", (int)res);
              break;
          case '^':
              res=pow(dec,op2);
              printf("El resultado aproximado en decimal es %i\n", (int)res);
              printf("El resultado aproximado en octal es %o\n", (int)res);
	      break;
          default:
              printf("Operación inválda\n");
              return 1;
              break;
        }
	
	return 0;
}
