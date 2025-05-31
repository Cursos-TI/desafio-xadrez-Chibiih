#include <stdio.h>

// Desafio de Xadrez - MateCheck - Scheilla Vieira
// Nível Mestre - Funções recursivas e loops aninhados. Substituindo as movimentações das peças por funções recursivas.
// Tive que alterar o nome das variaveis e das funções pois deu muitos erros quando tentei utilizar torre, rainha e bispo

//Funções recursivas Torre, bispo e rainha
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

//loops aninhados
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    for (int v = 1; v <= 1; v++) {  //loop externo
        for (int h = 1; h <= 1; h++) { //loop interno
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

 int main() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados / Novas variaveis e funções pois deu erro a antiga
    int quantidadeCasasTorre = 5;
    int quantidadeCasasBispo = 5;
    int quantidadeCasasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(quantidadeCasasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(quantidadeCasasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(quantidadeCasasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

   // Loops aninhados complexos 
    for (int i = 1; i <= movimentoVertical + movimentoHorizontal; i++) {
        for (int j = 1; j <= 2; j++) {
            if (i <= movimentoVertical) {
                printf("Cima\n");
                if (i == 2) break;
            } else if (i > movimentoVertical) {
                if (j == 1) {
                    printf("Direita\n");
                    continue;
                }
            }
        }
    }

    return 0;
}
