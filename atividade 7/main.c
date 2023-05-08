#include <stdio.h>

int main () {

    int x, num1, num2, num3, num4, soma, contagem = 1;
    printf("Digite qual estrutura de repeticao deseja utilizar:");
    printf("\n1 para While.\n2 para do...while.\n3 para For.\n");
    scanf("%d", &x);


        switch (x) {
            case 1:
                while (contagem <= 50) {
                    contagem++;
                    printf("Insira o primeiro valor desejado:\n");
                    scanf("%d", &num1);
                    printf("Insira o segundo valor desejado:\n");
                    scanf("%d", &num2);
                    printf("Insira o terceiro valor desejado:\n");
                    scanf("%d", &num3);
                    printf("Insira o quarto valor desejado:\n");
                    scanf("%d", &num4);
                    soma = num1 + num2 + num3 + num4;

                    printf("Os resultado da soma dos quatro numeros eh: %d\n", soma);
                }
                break;

            case 2:

                do {
                    contagem++;
                    printf("Insira o primeiro valor desejado:\n");
                    scanf("%d", &num1);
                    printf("Insira o segundo valor desejado:\n");
                    scanf("%d", &num2);
                    printf("Insira o terceiro valor desejado:\n");
                    scanf("%d", &num3);
                    printf("Insira o quarto valor desejado:\n");
                    scanf("%d", &num4);
                    soma = num1 + num2 + num3 + num4;

                    printf("Os resultado da soma dos quatro numeros eh: %d\n", soma);
                } while (contagem <= 50);
                break;

            case 3:

                for (contagem = 1; contagem <= 100; contagem++) {
                    contagem++;
                    printf("Insira o primeiro valor desejado:\n");
                    scanf("%d", &num1);
                    printf("Insira o segundo valor desejado:\n");
                    scanf("%d", &num2);
                    printf("Insira o terceiro valor desejado:\n");
                    scanf("%d", &num3);
                    printf("Insira o quarto valor desejado:\n");
                    scanf("%d", &num4);
                    soma = num1 + num2 + num3 + num4;

                    printf("O resultado da soma eh de: %d\n", soma);
                }
                break;
            default:
                printf("Seleciona alguma opcao valida.");

        }
        return 0;

}