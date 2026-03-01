#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Batalha Naval(Simulação simples com matriz)
    
    Nosso objetivo: Simular um disparo em um tabuleiro 5x5
    
    Regras:
    
    -> Tem um navio escondido aleatoriamente.
    -> O jogador informar coordenadas para atirar.
    -> O programa irá verificar se acertou ou errou.
*/    
    int main(){
        int tabuleiro[5][5] = {0}; // matriz 5x5
        int num1, num2;
        
        // Inicializa gerador de números aleatórios
        srand(time(NULL));
        
        // Posição do navio (aleatória)
        int navio_num1 = rand() % 5;
        int navio_num2 = rand() % 5;
        
        printf("=== SIMULADOR DE BATALHA NAVAL ===\n");
        printf("Digite coordenadas para o disparo(0 a 4):\n");
        printf("Liha: ");
        scanf("%d",&num1);
        
        printf("Coluna: ");
        scanf("%d", &num2);
        
        //verifica se disparo está dentro do tabuleiro
        if(num1 < 0 || num1 >=5 || num2 < 0 || num2 >=5){
            printf("Coordenada invalida!\n");
            return 0;
      }
      
      //Verifica acerto ou erro
      if(num1 == navio_num1 && num2 == navio_num2){
        printf("\nACERTOU O ALVO\n");  
      }
      else{
          printf("\nAGUA! Você errou.\n");
          printf("O navio estava em: (%d,%d)\n", navio_num1, navio_num2);
      }
        printf("\nPrograma finalizado.\n");
        
        return 0;
    }
