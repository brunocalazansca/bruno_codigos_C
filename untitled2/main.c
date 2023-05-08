#include <stdio.h>

int main() {
    int i;
    int num1, num2, num3, num4;
    int soma;

    for (i = 0; i < 50; i++) {
        printf("Digite quatro numeros inteiros:\n ");
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

        soma = num1 + num2 + num3 + num4;

        printf("A soma dos quatro números é: %d\n", soma);
    }

    return 0;
}
