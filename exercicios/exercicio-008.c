#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  int Valor_1, Valor_2, *Ponteiro_1, *Poteiro_2;

  Valor_1 = 4;
  Valor_2 = 3;
  Ponteiro_1 = &a;
  Ponteiro_2 = p1; // ponteiro P2 aponta para P1 que no caso aponta para a variavel A

  printf("P1 em hexa: %x em decimal: %d\n",*Ponteiro_1, *Ponteiro_1);
  printf("P2 em hexa: %x em decimal: %d\n",*Ponteiro_2, *Ponteiro_2);

  *Ponteiro_2 = *Ponteiro_1 + 3; //P2 = incrementa +3 que muda o valor da variavel A é tudo antes dela ou seja A fica 8

  printf("P2 em hexa: %x em decimal: %d \n", Ponteiro_2, Ponteiro_2);

  Valor_2 = Valor_2 * (*Ponteiro_1); // B recebe o valor de b + P1 = 21

  printf("B em hexa: %d em decimal: %x \n", Valor_2);

  (*Ponteiro_2)++; //P2 incrementa +3 mudando o valor da alocação da memoria para 6422292 dec 

  printf("o valor de A e %d \n", Valor_1);
  printf("P2 em decimal : %d em hexa : %x \n", Ponteiro_2);

  Ponteiro_1 = &Valor_2;// P1 aponta o valor de B, recebendo 21

  printf("%d %d\n", *Ponteiro_1, *Ponteiro_2);
  printf("%d %d\n", Valor_1, Valor_2);

  system("pause");
}
