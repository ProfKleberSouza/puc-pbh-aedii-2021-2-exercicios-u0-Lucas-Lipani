#include <stdio.h>
#include <string.h>


typedef struct diario{
   char nome[100];
   float nota;
}diario;

int main() {
   int n;
   printf("Quantos?\n");
   scanf(" %d", &n);
   diario aluno[n];

   // loop responsável de preencher os alunos
   for (int i = 0; i < n; i++){
      fgets(aluno[i].nome,100,stdin);
      scanf(" %f", &aluno[i].nota);
   }

   // loop responsável de calcular a média dos alunos cadastrados
   float media = 0;

   for (int i = 0; i < n; i++)
      media += aluno[i].nota;
   

   media = media/n;

   // loop responsável de selecionar as 3 maiores notas
/*
   for (int i = 0; i < n; i++){
      if (aluno[i].nota > aluno[0].nota){
         aluno[2].nome = aluno[1].nome;
         aluno[2].nota = aluno[1].nota;
         aluno[1].nome = aluno[0].nome;
         aluno[1].nota = aluno[0].nota;
         aluno[0].nome = aluno[i].nome;
         aluno[0].nota = aluno[i].nota;
      }
   }
   */
   for (int i = 0; i < n; i++){
      printf("Nome: %s --- Nota: %f\n", aluno[i].nome, aluno[i].nota);
   }
   //printf("NOTA MEDIA = %.1f\n%s %.1f\n%s %.1f\n%s %.1f\n", media, aluno[0].nome, aluno[0].nota, aluno[1].nome, aluno[1].nota, aluno[2].nome, aluno[2].nota);

   return 0;
}