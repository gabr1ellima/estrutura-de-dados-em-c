#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia dois vetores de 10 elementos. 
Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, 
que contém apenas os números que estão em ambos os vetores. 
Não deve conter números repetidos 

Vetor_A = 2 3 5 5 6 9 5 7 8 8
Vetor_B = 1 1 5 5 6 9 5 8 7 3
Vetor_I = 3 5 5 5 5 5 5 6 9 5 5 5 7 8 8

Vetor_Cardinal = 3 5 6 9 7 8 
*/

int main(){
  int Tamanho = 10;

  int Tamanho_I = 100;

  int Vetor_A[Tamanho], Vetor_B[Tamanho], Vetor_I[Tamanho_I], Vetor_Cardinal_I[Tamanho];

  int a, b, T_i = 1, i = 1, icard = 1, T_icard = 1;

  // Vetor A
  for (a = 1; a <= Tamanho; a++){
    printf("Digite um Valor para Vetor A[%d]", a);
    scanf("%d", &Vetor_A[a]);
  }

  // Vetor B
  for (b = 1; b <= Tamanho; b++){
    printf("Digite um Valor para Vetor B[%d]", b);
    scanf(" %d ", &Vetor_B[b]);
  }
​​
  printf("Vetor A = {​​ ");
  for (a = 1; a <= Tamanho; a++){​
    printf(" %d ", Vetor_A[a]);
  }
  printf(" }​​\n");

  printf("Vetor B = {​​ ");
  for (b = 1; b <= Tamanho; b++){
    printf(" %d ", Vetor_B[b]);
  }
  printf(" }​​\n");

  //Vetor I
  for (int a = 1; a <= Tamanho; a++){
    for (int b = 1; b <= Tamanho; b++){
      ​​if ((a <= Tamanho) && (Vetor_A[a] == Vetor_B[b])){
        ​​Vetor_I[i] = Vetor_A[a];
        i++;
        T_i = i - 1;
      }​​else{
       T_i = i - 1;
      }​​
    }​​
  }
  
  Vetor_Cardinal_I[1] = Vetor_I[1​]​;
  for (i = 2; i <= T_i; i++){
    for ( icard = 1; icard <= T_icard; icard++){
      if(Vetor_I[i] != Vetor_Cardinal_I[icard] ) && (T_icard == icard){
        T_icard = T_icard + 1;
        icard = T_icard;
        Vetor_Cardinal_I[icard] = Vetor_I[i];
      }else if(Vetor_I[icard] == Vetor_Cardinal_I[icard]){
        Vetor_Cardinal_I[icard]=Vetor_I[i];
      }
    }
  }

  system("pause");
};
​​