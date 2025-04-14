#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char msg[200];  // Armazena a string original
    char palavra[50]; // Armazena cada palavra temporariamente
    int i = 0, j = 0;

    // Lendo a mensagem completa
    scanf(" %[^\n]", msg);

    // Percorre a string original sem modificar
    while (msg[i] != '\0') {
        if (isspace(msg[i])) {
            if (j > 0) {
                palavra[j] = '\0'; // Finaliza a palavra
                printf("%s %s ", palavra, palavra); // Imprime a palavra duplicada seguida de um espaço
                j = 0; // Reinicia a variável para armazenar a próxima palavra
            }
        } else {
            palavra[j++] = msg[i]; // Adiciona o caractere à palavra temporária
        }
        i++;
    }

    // Última palavra (se existir)
    if (j > 0) {
        palavra[j] = '\0';
        printf("%s %s", palavra, palavra); // Imprime a última palavra sem espaço extra no final
    }

    printf("\n"); // Garante quebra de linha no final
    return 0;
}

// O código lê uma string de entrada e imprime cada palavra duas vezes, separadas por um espaço.
// Ele utiliza um buffer temporário para armazenar cada palavra enquanto percorre a string original.
// Quando encontra um espaço, imprime a palavra armazenada e reinicia o buffer para a próxima palavra.
// Codigo revisado com base no que foi solicitado, o código original não estava correto pois não estava imprimindo a ultima palavra corretamente, e o espaço no final estava errado.
