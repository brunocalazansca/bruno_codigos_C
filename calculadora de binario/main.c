#include <stdio.h>

int main() {
    int num_binario, num_decimal = 0, base = 1, rem;

    printf("Digite um numero binario: ");
    scanf("%d", &num_binario);



    while (num_binario != 0) {
        rem = num_binario % 10;
        num_decimal += rem * base;
        base *= 2;
        num_binario /= 10;
    }

    printf("O numero decimal e: %d", num_decimal);

    return 0;
}
