#include <stdio.h>

int main() {
   int X, Y, Z;
   
   scanf("%d %d %d", &X, &Y, &Z);

   if(X <= Y + Z && Y <= X + Z && Z <= Y + X){
      if (X == Y && Y == Z)
         printf("TRIANGULO EQUILATERO\n");
      else if(X!= Y && Y != Z && X != Z)
         printf("TRIANGULO ESCALENO\n");
      else
         printf("TRIANGULO ISOSCELES\n");
   }
   else
      printf("OS LADOS NAO FORMAM UM TRIANGULO\n");
   return 0;
}