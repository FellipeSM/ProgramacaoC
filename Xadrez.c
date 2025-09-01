#include <stdio.h>

int main() {
    // -- Simulação do Movimento da Torre --
    // A Torre se move em linha reta horizontalmente ou verticalmente.
    // Usaremos um loop 'for' para simular o movimento de 5 casas para a direita.
    printf("-- Movimento da Torre --\n");
    int casasTorre = 5; // Define o número de casas que a Torre vai se mover

    // Loop for: a Torre se move 'casasTorre' vezes para a direita.
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação

    // -- Simulação do Movimento do Bispo --
    // O Bispo se move na diagonal.
    // Usaremos um loop 'while' para simular o movimento de 5 casas na diagonal (Cima, Direita).
    printf("-- Movimento do Bispo --\n");
    int casasBispo = 5; // Define o número de casas que o Bispo vai se mover
    int contadorBispo = 0; // Inicializa um contador para o loop while

    // Loop while: o Bispo se move 'casasBispo' vezes na diagonal.
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação das direções para diagonal
        contadorBispo++; // Incrementa o contador para avançar no movimento
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação

    // -- Simulação do Movimento da Rainha --
    // A Rainha se move em todas as direções.
    // Usaremos um loop 'do-while' para simular o movimento de 8 casas para a esquerda.
    printf("-- Movimento da Rainha --\n");
    int casasRainha = 8; // Define o número de casas que a Rainha vai se mover
    int contadorRainha = 0; // Inicializa um contador para o loop do-while

    // Loop do-while: a Rainha se move 'casasRainha' vezes para a esquerda.
    // O bloco do 'do-while' é executado pelo menos uma vez, e depois a condição é verificada.
    if (casasRainha > 0) { // Garante que o loop execute se houver movimento
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento
            contadorRainha++; // Incrementa o contador para avançar no movimento
        } while (contadorRainha < casasRainha);
    } else {
        printf("A Rainha não se moveu.\n");
    }
    printf("\n");

    return 0;
}