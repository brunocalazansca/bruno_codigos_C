#include <stdio.h>
#include <math.h>


int main() {

    int num, final, passar;
    float quadrado;
    passar = 15;
    final = 200;
    printf("Observe a seguir todos os quadrados inteiros de 15 a 200.\n");

    for (num =15; passar <= final; passar++){
        quadrado = pow(passar,2);
        printf("O quadrado do numero %d eh: %0.2f\n", passar, quadrado);
    }





    return 0;
}
