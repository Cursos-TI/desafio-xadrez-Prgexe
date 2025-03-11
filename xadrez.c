#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Função recursiva para o movimento do Bispo
void moverBispo(int movimento) {
    if (movimento == 0) {
        return;  
    }

    // Mover uma casa para cima
    printf("Cima\n");
    // Mover uma casa para a direita
    printf("Direita\n");

    // Chama a função recursivamente para o próximo movimento
    moverBispo(movimento - 1);
}

// Função recursiva para o movimento da Torre
void moverTorre(int movimento) {
    if (movimento == 0) {
        return;  
    }

    // Mover uma casa para a direita
    printf("Direita\n");

    // Chama a função recursivamente para o próximo movimento
    moverTorre(movimento - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int movimento) {
    if (movimento == 0) {
        return;  
    }

    // Mover uma casa para a esquerda
    printf("Esquerda\n");

    // Chama a função recursivamente para o próximo movimento
    moverRainha(movimento - 1);
}

// Função para o movimento do Cavalo
void moverCavalo() {
    // Loop aninhado com múltiplas variáveis e condições
    for (int i = 1; i <= 1; i++) {  // O Cavalo se move uma vez (1 movimento)
        for (int j = 1; j <= 2; j++) {  // Move 2 casas para cima
            printf("Cima\n");
            if (j == 2) {
                // Após as 2 casas para cima, move uma casa para a direita
                printf("Direita\n");
                break;  // Após o movimento para a direita, termina o movimento
            }
        }
    }
}

int main() {
    int opcao;

    printf("Escolha a peça para movimentar:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    // Usando switch para verificar a opção e movimentar a peça
    switch(opcao) {
        case 1:  // Movimento do Bispo
            printf("Movendo o Bispo:\n");
            moverBispo(5);  // 5 casas na diagonal para cima e à direita
            break;

        case 2:  // Movimento da Torre
            printf("Movendo a Torre:\n");
            moverTorre(5);  // 5 casas para a direita
            break;

        case 3:  // Movimento da Rainha
            printf("Movendo a Rainha:\n");
            moverRainha(8);  // 8 casas para a esquerda
            break;

        case 4:  // Movimento do Cavalo
            printf("Movendo o Cavalo:\n");
            moverCavalo();  // Movimento em "L"
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

