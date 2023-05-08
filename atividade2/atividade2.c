#include <stdio.h>

int main() {
   int num, i;
   double n=1, fat=1;

   printf("Digite o valor desejado:\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++ ){
       fat*=i;
       n +=1/fat;
   }
   printf("O resultado eh: %1f\n", n);
   return 0;
}
