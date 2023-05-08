#include <stdio.h>

int main() {

  int selecao;
  float dens, vol, massa;

  printf("Vamos para a nossa calculadora de densidade\n");
  printf("Com base nisso, selecione a opcao desejada:\n");
  printf("1 para densidade\n");
  printf("2 para volume\n");
  printf("3 para massa\n");

  scanf("%d", &selecao);

  if(selecao != 1 && selecao != 2 && selecao != 3){
    printf("Selecione uma opção válida.");
  }

  switch (selecao){

          case 1:
      printf("Insira a massa desejada:\n");
      scanf("%f", &massa);
      printf("Insira o volume desejado:\n");
      scanf("%f", &vol);

      dens = (massa/vol);

        printf("A densidade eh: %0.1f", dens);
        break;

      case 2:
          printf("Insira a sua densidade:\n");
          scanf("%f", &dens);
          printf("Insira a sua massa:\n");
          scanf("%f", &massa);

          vol = massa/dens;

          printf("O seu volume eh de: %0.1f", vol);
          break;

      case 3:

          printf("Insira a sua densidade:\n");
          scanf("%f", &dens);
          printf("Insira o seu volume:\n");
          scanf("%f", &vol);

          massa = dens * vol;

          printf("A sua massa eh: %0.1f", massa);
          break;
  }


        return 0;
}