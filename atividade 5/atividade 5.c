#include <stdio.h>

int main() {
    int num, soma = 0, calculo = 0;
    float media;

    while (1){
        printf("Digite a idade que deseja, sendo a idade 0 para finalizar.\n");
        scanf("%d", &num);

        if (num == 0){
            break;
        }
        soma += num;
        calculo++;
    }
    if (calculo > 0){
        media = soma / calculo;
        printf("A media das idades fornecidas eh igual a: %0.2f\n", media);}

    else {
        printf ("Nenhuma idade foi informada");
    }
    return 0;
}
