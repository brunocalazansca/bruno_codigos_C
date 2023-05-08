#include <stdio.h>

int main() {
    int i = 0;

        while (i <= 98){

            i+=2;

            if(i % 2 == 0){
                printf("Os primeiros 50 numeros pares sao: %d\n", i);
            }
            if(i % 2 == 1){
                break;
            }
        }


    return 0;
}
