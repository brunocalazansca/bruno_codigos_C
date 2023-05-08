#include <stdio.h>

int main() {

    int num;
    int soma = 0;
    printf("Digite o valor desejado:\n");
    scanf("%d", &num);

    int i = 1;
    while(i <= num)
    {
        soma = soma + i;
        printf("%d\n", i);
        i++;
    }
    printf("O somatorio de 1 ate %d e igual a %d\n:", num, soma);


    return 0;
}
