/**
* @file binario.c
* @brief Este programa tiene como función convertir un  número binario a decimal
* @author 
* @date 
*/

#include "calcula.h"

int binario(int op1, char *numBin)
    {
    int pos=0, dec=0;
    int arreglo[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    int i;

 pos=op1-1;
  for(i=0; i<op1;i++)
 {
if(numBin[i] =='1')
   {
    dec=dec+arreglo[pos];
   }
  else
  if(numBin[i] == '0')
{
dec= dec + 0;
   }
 else if(numBin[i]>'1')
{
        printf("\nEl numero binario no es correcto\n");
        exit(0);
      }
 pos--;
 }

  return (dec);
}
