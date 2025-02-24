#include <stdio.h>

 // Desafio de Xadrez - MateCheck
 // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
 // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 int main() {

     int bispo = 1; 
   
     while(bispo <= 5){
     printf("bispo diagonal superior direita %d\n", bispo);
     bispo++; }
     printf ("\n");

     // Implementação de Movimentação do Bispo
     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    

         int torre = 1;

         do { printf("torre para direita %d\n", torre);
         torre++;} 
         while (torre <= 5);
         printf ("\n");

         // Implementação de Movimentação da Torre
         // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    

             for (int rainha = 1; rainha <= 8; rainha++) {
             printf("rainha para esquerda %d\n", rainha);}
             printf ("\n");
             // Implementação de Movimentação da Rainha
             // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
                

                 for (int i = 1; i <= 1; i++) {
                 for (int j = 1; j <= 2; j++) {
                 printf("cavalo para baixo %d\n", i * j); }
                 }
    

                     int cavalo = 1;
                       while (cavalo <= 1) { 
                     int j = 1;
                       while (j <= 1) {
                       printf("Cavalo para esquerda %d\n", cavalo * j); 
                       j++;}
                       printf("\n");
                       cavalo++; }
                       
                       // Nível Aventureiro - Movimentação do Cavalo
                       // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
                       // Um loop pode representar a movimentação horizontal e outro vertical.


    return 0;
}
