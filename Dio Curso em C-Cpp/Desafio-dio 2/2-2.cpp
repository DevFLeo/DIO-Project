#include <stdio.h>
#include <stdlib.h>

// Função que retorna o índice do robô que percorreu a maior distância
int maiorDistancia(int posicoes[], int tamanho) {
    int maiorDist = 0; // Maior distância encontrada
    int indiceMaior = 0; // Índice correspondente

    // Percorre o array para encontrar a maior distância
    for (int i = 0; i < tamanho; i++) {
        int distancia = abs(posicoes[i]); // Calcula a distância absoluta
        if (distancia > maiorDist) { // Atualiza caso encontre uma distância maior
            maiorDist = distancia;
            indiceMaior = i;
        }
    }

    return indiceMaior; // Retorna o índice do robô com maior distância
}

int main() {
    int N;

    // Leitura do tamanho do array
    scanf("%d", &N);

    // Validação do tamanho do array
    if (N < 1 || N > 10) {
        return 1; // Encerra o programa se N for inválido
    }

    int posicoes[N];

    // Leitura das posições dos robôs
    for (int i = 0; i < N; i++) {
        scanf("%d", &posicoes[i]);
    }

    // Obtém o índice e imprime a saída formatada corretamente (+1 para ajustar contagem)
    printf("O robô que percorreu a maior distância é o robô %d\n", maiorDistancia(posicoes, N) + 1);

    return 0;
}
