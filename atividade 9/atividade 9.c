#include <stdio.h>

int main() {

    int i, mult = 0;

    for (i = 1; i < 100; i++) {
        if (i % 3 == 0) {

            printf("Os cinco numeros multiplos de 3 sao: %d\n", i);
            mult++;
            if(mult == 5){
                break;
            }
        }


    }

    return 0;
}
