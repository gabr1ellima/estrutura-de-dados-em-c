/* Situção-problema:
Imagine que seria preciso criar algoritmos específicos para
1) Manipular em conjunto de fichas de um fichário;
2) Organizar as pessoas que querem ser atendidas num guichê;
3) Organizar um conjunto de pratos que stão endo lavados, um a um;
4) Visualizar o conjunto de pessoas que trabalham em uma empresa,
tendo em conta sua função. QUal seria a melhor solução para realizar operações em cada uma destas situações?
*/

/* 
  * &

  Tipo* Nome;
  Tipo * Nome;
  Tipo *Nome;
  Tipo *Nome = NULL;

  (*Nome)++;

  // Memória -> | | | | |
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
/*
  int Numero, Valor, *Ponteiro;

  Numero = 10;
  Ponteiro = &Numero;
  Valor = *Ponteiro;

  printf("Numero: %d Posicao: %d\n",Numero, Ponteiro);
  printf("Numero: %d Posicao: %x\n",Numero, Ponteiro);
  printf("Numero: %d Valor = %d Posicao: %x\n",Numero, Valor, Ponteiro);

  (*Ponteiro)++;
  Valor = *Ponteiro;

  printf("Numero: %d Valor = %d Posicao: %x\n",Numero, Valor, Ponteiro);
*/


  int Valor, *Ponteiro, **Ponteiro_2, **Ponteiro_3;

  Valor = 12;
  Ponteiro = &Valor;
  Ponteiro_2 = &Ponteiro;

  printf("Endereco Hexa: %x Decimal: %d\n",Ponteiro, Ponteiro);
  printf("Endereco Hexa: %x Decimal: %d\n",Ponteiro_2, Ponteiro_2);
  printf("Valor: %d \n",Valor);
  printf("Valor: %d \n",*Ponteiro);

  (**Ponteiro_2)++;

  printf("Endereco Hexa: %x Decimal: %d\n",Ponteiro, Ponteiro);
  printf("Endereco Hexa: %x Decimal: %d\n",Ponteiro_2, Ponteiro_2);
  printf("Valor: %d \n",Valor);
  printf("Valor: %d \n",*Ponteiro);

  system("pause");
}
