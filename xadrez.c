#include <stdio.h>

// Desafio de Xadrez - MateCheck - Scheilla Vieira

int main() {

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

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

    return 0;
}
