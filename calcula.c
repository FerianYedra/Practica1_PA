/**
 * @file calcula.c
 * @brief
 * @author
 * @date 31/01/2020
 */

#include "calcula.h"

int main(int argc, char *argv[]){
	int op1, op2;
	float res;

	sscanf(argv[1], "%i", &op1);
	sscanf(argv[3], "%i", &op2);

	switch(argv[2][0]){
	   case '+':
              printf("El resultado en decimal es %i\n", op1+op2);
              printf("El resultado en octal es %o\n", op1+op2);
              break;
          case '-':
              printf("El resultado en decimal es %i\n", op1-op2);
              printf("El resultado en octal es %o\n", op1-op2);
              break;
          case 'x':
              printf("El resultado en decimal es %i\n", op1*op2);
              printf("El resultado en octal es %o\n", op1*op2);
              break;
          case '/':
              res=op1/op2;
              printf("El resultado aproximado en decimal es %i\n", (int)res);
              printf("El resultado aproximado en octal es %o\n", (int)res);
              break;
          case '^':
              res=pow(op1,op2);
              printf("El resultado aproximado en decimal es %i\n", (int)res);
              printf("El resultado aproximado en octal es %o\n", (int)res);
          default:
              printf("Operación inválda\n");
              return 1;
              break;
        }
	
	return 0;
}
