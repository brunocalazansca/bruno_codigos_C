#include <stdio.h>
#include <locale.h>
int main() {
    int x;
    setlocale(LC_ALL, "portuguese");

    printf("Ola, insira a seguir a opcao que deseja axecutar, sendo:\n");
    printf("Informe: Os numeros serao solicitados ate que o valor -1 seja informado.\n");

    printf("Alternativa 1: Soma dos valores digitados.\n");
    printf("Alternativa 2: Quantidade de numeros digitados.\n");
    printf("Alternativa 3: Media dos numeros digitados.\n");
    printf("Alternativa 4: Maior numero digitado. \n");
    printf("Alternativa 5: Menor numero digitdo.\n");
    printf("Alternativa 6: Media dos numeros pares digitados.\n");
    printf("Alternativa 7: Sair\n");
    scanf("%d", &x);

    if (x != 1 && x != 2 && x != 3 && x != 4 && x != 5 && x != 6 && x != 7)
    {
        printf("Valor invalido, insira um valor solicitado.");
        return 0;
    }


        int num = 0;
        int calculo = 0;
    switch (x)
    {

        case 1:
            num = 0;
            calculo = 0;
            while (num != -1){
                printf("Insira os valores desejados e -1 para encerrar:\n");
                scanf("%d", &num);

               if (num == -1){
                   printf("O resultado eh: %d\n", calculo);
                   break;
               }
                calculo += num;
                printf("O resultado eh: %d\n", calculo);
            }
            break;

        case 2:
                printf("informe os valores desejados:");

            do {

                scanf("%d", &num);

                if (num == -1){
                    printf("Voce digitou %d numeros:", calculo);
                    break;
                }

                calculo++;
            }
            while (num != -1);
                printf("Voce digitou %d numeros:", calculo);





            case 3:
                int num;
                float nota, soma = 0, media;

            while (num != 1)
            {
                printf("Digite os numeros que deseja:\n");
                scanf("%d", &num);

                if (num == -1) {
                    break;
                }
                calculo += 1;
                soma += num;
                media = soma / calculo;

            }
                printf("Sua media eh: %0.2f", media);
                break;


                case 4:
                    int maior = 1;

                    while (num != -1){
                        printf("Digite o valor desejado:\n");
                        scanf("%d", &num);

                        if(num == (-1)){
                            break;
                        }
                        if (maior < num){
                            maior = num;
                        }
                    }
                    printf("O maior numero digitado eh: %d\n", maior);
                    break;

                    case 5:

                        int menor = 999;

                    while (num != -1){
                        printf ("Digite o valor desejado:\n");
                        scanf("%d", &num);

                        if(num==(-1)){
                            break;
                        }
                        if (menor > num){
                            menor = num;
                        }
                    }
                    printf("O menor numero digitado eh %d:\n", menor);



                    case 6:

                        while(num != -1){
                            printf("Digite o valor desejado:");
                            scanf("%d", &num);
                            if(num==(-1)){
                                break;
                            }
                            if(num%2==0){
                                calculo += 1;
                                soma =+ num;
                                media = soma / calculo;
                            }
                        }
                        printf("A media dos numeros pares eh: %0.2f", media);
                        break;



                    }


    return 0;
}
