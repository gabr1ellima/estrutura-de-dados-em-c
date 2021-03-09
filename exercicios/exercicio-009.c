/*
Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int Valor1 = 3, Valor2 = 4, *Ponteiro_1, *Ponteiro_2;

  Ponteiro_1 = &Valor1;
  Ponteiro_2 = &Valor2;

  printf("Ponteiro_1: %x Ponteiro_2: %x \n",Ponteiro_1, Ponteiro_2);

  if(Ponteiro_1 > Ponteiro_2){
    printf("%x \n",Ponteiro_1);
  } else {
    printf("%x \n",Ponteiro_2);
  }
  system("pause");
}