#include <stdio.h>

int main() {
   int n;
   scanf(" %d", &n);

   int v[n];
   for (int i = 0; i < n; i++)
      scanf(" %d", &v[i]);

   int maior = v[0], menor = v[0];
   for(int i = 0; i < n; i++){
      if(menor > v[i])
         menor = v[i];
      else if(maior < v[i])
         maior = v[i];
   }

   printf("MENOR = %d\nMAIOR = %d\n", menor, maior);
   
   return 0;
}