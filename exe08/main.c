#include <stdio.h>

int main() {
   
   int n;

   scanf(" %d", &n);
   while(n!=0){
      if(n > 0)
         printf("POSITIVO\n");
      else
         printf("NEGATIVO\n");
      scanf(" %d", &n);
   }
   
   return 0;
}