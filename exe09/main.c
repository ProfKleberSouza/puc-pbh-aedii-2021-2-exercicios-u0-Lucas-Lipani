#include <stdio.h>
#include <string.h>


typedef struct diario{
   char nome[100];
   float nota;
}diario;

int main() {
   int n;
   scanf("%d", &n);
   diario aluno[n];

   // loop responsável de preencher os alunos
   for (int i = 0; i < n; i++){
      scanf("%s", aluno[i].nome);
      scanf("%f", &aluno[i].nota);
   }

   // loop responsável de calcular a média dos alunos cadastrados
   float media = 0;

   for (int i = 0; i < n; i++)
      media += aluno[i].nota;
   
   // calcula a media
   media = media/n;

   // coloca os alunos em ordem decrescente me relação a nota

   char nome_aux[100];
   float nota_aux;

   for(int i = 0; i < n; i++){
      for (int j = i + 1; j < n; j++){
         if(aluno[i].nota < aluno[j].nota){
            strcpy(nome_aux,aluno[i].nome);
            strcpy(aluno[i].nome,aluno[j].nome);
            strcpy(aluno[j].nome,nome_aux);
            nota_aux = aluno[i].nota;
            aluno[i].nota = aluno [j].nota;
            aluno[j].nota = nota_aux;
         }
      }
   }


   //apos realocado as maiores notas, o próximo loop organiza as 3 primeiras notas por ordem alfabética

   
   for(int i = 0; i < 2; i++){
      for (int j = i + 1; j < 3; j++){
         if(strcmp(aluno[i].nome,aluno[j].nome) > 0){
            strcpy(nome_aux,aluno[i].nome);
            strcpy(aluno[i].nome,aluno[j].nome);
            strcpy(aluno[j].nome,nome_aux);
            nota_aux = aluno[i].nota;
            aluno[i].nota = aluno [j].nota;
            aluno[j].nota = nota_aux;
            }
      }
   }
   

   // saída na tela
   printf("NOTA MEDIA = %.1f\n", media);
   
   for (int i = 0; i < 3; i++)
      printf("%s %.1f\n",aluno[i].nome, aluno[i].nota);

   return 0;
}
