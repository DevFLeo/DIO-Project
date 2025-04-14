#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Leitura do tamanho do array
    scanf("%d", &n);

    // Validação do tamanho do array
    if (n <= 0 || n > 24) {
        return 1; // Encerra o programa se n for inválido
    }

    int veiculos[n], soma = 0, count = 0;

    // Leitura dos valores de veículos por hora
    for (int i = 0; i < n; i++) {
        scanf("%d", &veiculos[i]);

        // Considera apenas valores válidos no cálculo da média
        if (veiculos[i] >= 0 && veiculos[i] <= 10000) {
            soma += veiculos[i];
            count++;
        }
    }

    // Evita divisão por zero
    if (count == 0) {
        printf("Média de veículos por hora: 0\n");
    } else {
        int media = round((double)soma / count);
        printf("Média de veículos por hora: %d\n", media);
    }

    return 0;
}
