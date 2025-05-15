#include <stdio.h>
#include <string.h>

// Definição da estrutura Livro
typedef struct {
    char titulo[101];  // Armazena o título do livro
    char autor[101];   // Armazena o autor do livro
    int ano;           // Armazena o ano de publicação
} Livro;

int main() {
    int N;

    // Leitura do número de livros
    scanf("%d", &N);

    // Validação do limite de livros
    if (N < 1 || N > 100) {
        return 1; // Encerra o programa caso N seja inválido
    }

    Livro biblioteca[N]; // Array de struct para armazenar os livros

    // Leitura das informações de cada livro
    for (int i = 0; i < N; i++) {
        scanf(" %[^\n]", biblioteca[i].titulo);  // Lê o título completo com espaços
        scanf(" %[^\n]", biblioteca[i].autor);   // Lê o autor completo com espaços
        scanf("%d", &biblioteca[i].ano);        // Lê o ano de publicação
    }

    // Encontrar o livro mais antigo
    int indiceLivroMaisAntigo = 0;
    for (int i = 1; i < N; i++) {
        if (biblioteca[i].ano < biblioteca[indiceLivroMaisAntigo].ano) {
            indiceLivroMaisAntigo = i;
        }
    }

    // Impressão do livro mais antigo
    printf("%s\n", biblioteca[indiceLivroMaisAntigo].titulo);
    printf("%s\n", biblioteca[indiceLivroMaisAntigo].autor);
    printf("%d\n", biblioteca[indiceLivroMaisAntigo].ano);

    return 0;
}
