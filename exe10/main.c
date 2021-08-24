#include <stdio.h>

int main() {
   int v[10];

   for (int i = 0; i < 10; i++){
      scanf(" %d", &v[i]);
   }

   int v_invertido[10];

   for (int i = 0, j = 9; i < 10; i++,  j--){
      v_invertido[j] = v[i];
   }

   for(int i = 0; i < 10; i++){
      printf("%d\n", v_invertido[i]);
   }
   return 0;
}