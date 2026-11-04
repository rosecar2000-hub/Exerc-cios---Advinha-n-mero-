#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main () {
int numeroSecreto;
int palpite;
int tentativas = 0;
int jagarNovamente = 1;

  sacnd(time(NULL);
  numeroSecreto = rand() % 100 + 1;

  printf("===JOGA DA ADVINHACAO===\N);
  printf("tente advinhar o numero de 1 a 100!\n");

  printf("Digite seu palpite: ");
  scanf("%d" , &palpite);

  tentativas+++;
  if (palpite == numeroSecreto) {
    printf("parabens! Voce acertou!\n");
  }
  else if (palpite <numeroSecreto) {
    printf("0 numero secreto e maior!\n");
  }

  else {
    printf("0 numero secreto e menor!\n");
  }

  while (palpite != numerosSecreto);
  printf("tentativas: %d\n , tentativas);


    printf("deseja jogar(1-sim\ 0-nao): ");
  sacnf("%d" , &jogarNovamente);

  printf("obrigada por jogar!\n");
  
    

return 0;
}
