#include <stdio.h>

int main() {
   int T, V, R;

   scanf("%d %d %d", &T, &V, &R);

   printf("R = %d\nV = %d\nT = %d\nD = %d\nL = %d\n", R, V, T, T * V, (T * V) / R);
   
   return 0;
}