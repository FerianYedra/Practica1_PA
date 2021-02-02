/**
* @file binario.c
* @brief Este programa tiene como función convertir un  número binario a decimal.
*
* @author Nancy Melina Rodríguez y Fernando Ian Yedra
* @date 01/30/2021
* @param int op1	Es el número de bits que ocupa el número en la memotia
* @param char *numBin   Es el número en binario en formato string que se va a convertir
* @return int dec 	Es el número en decimal convertido del binario
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
        return (1);
      }
 pos--;
 }

  return (dec);
}
