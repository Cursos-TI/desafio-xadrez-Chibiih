#include <stdio.h>

// Desafio de Xadrez - MateCheck - Scheilla Vieira

int main() {

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Nivel novato
    // Movendo a Torre
    int torre = 5; // Número de casas a serem movidas
    printf("Movimento da Torre:\n");

    // Utilizando o for
    for (int i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movendo o Bispo
    int bispo = 5; 
    printf("Movimento do Bispo:\n");

    // While
    int contadorBispo = 1;
    while (contadorBispo <= bispo) {
        printf("Cima e direita\n");
        contadorBispo++;
    }

    printf("\n");

    // Movendo a Rainha
    int rainha = 8; 
    printf("Movimento da Rainha:\n");

    // Do-while
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= rainha);

    printf("\n");

    // Adicionando o nivel aventureiro - Movimentando o cavalo

    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 2; 
    int movimentoHorizontal = 1;

    // Primeiro for para movimento vertical, indo duas casas para baixo
    for (int i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n");
        
        // Segundo loop, sendo while, dentro do for
        int j = 1;
        while (j <= 0) { 
            j++;
        }
    }

    // Movimento horizontal
    int k = 1;
    while (k <= movimentoHorizontal) {
        printf("Esquerda\n");
        k++;
    }
    return 0;
}
