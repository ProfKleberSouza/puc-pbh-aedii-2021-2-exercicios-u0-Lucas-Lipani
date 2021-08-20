#include <stdio.h>

int main() {

   int v[3];
   for (int i = 0; i < 3; i++)
      scanf(" %d", &v[i]);

   int maior = v[0];
   int menor = v[0];

   for (int i = 0; i < 3; i++){
      if (v[i] < menor)
         menor = v[i];
      else if(v[i] > maior)
         maior = v[i];
   }

   printf("MENOR = %d\nMAIOR = %d\n", menor, maior);
   
   return 0;
}