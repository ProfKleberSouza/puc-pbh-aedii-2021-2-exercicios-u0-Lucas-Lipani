#include <stdio.h>

int main() {
   float v[4];
   
   for (int i = 0; i < 4; i ++){
      scanf("%f", &v[i]);
   }

   float media = 0;

   for (int i = 0; i < 4; i++)
      media += v[i];
   
   media = media/4;

   if(media >= 6)
      printf("NOTA = %.1f (APROVADO)\n", media);
   else
      printf("NOTA = %.1f (REPROVADO)\n", media);

   return 0;
}