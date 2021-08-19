#include <stdio.h>

int main() {

   int n;

   scanf("%d", &n);

   if (n > 0 && n % 2 == 0){
      printf("NUMERO PAR POSITIVO\n");
   }
   else if(n < 0 && n % 2 == 0){
      printf("NUMERO PAR NEGATIVO\n");
   }
   else if(n > 0 && n % 2 != 0){
      printf("NUMERO IMPAR POSITIVO\n");
   }
   else if(n < 0 && n % 2 != 0){
      printf("NUMERO IMPAR NEGATIVO\n");
   }
   else
   printf("NUMERO NEUTRO\n");

   return 0;
}