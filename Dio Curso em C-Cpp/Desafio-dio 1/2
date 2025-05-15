#include <stdio.h>

int main() {
    float peso, altura;
    char pelos, mamifero;

    // Recebendo os dados do usuário
    scanf("%f", &peso);
    scanf("%f", &altura);
    scanf(" %c", &pelos); // O espaço antes de %c evita problemas de buffer
    scanf(" %c", &mamifero);

    // Classificação do animal
    if (peso >= 2000 && altura >= 300) {
        printf("O animal é um elefante!\n");
    } 
    else if (pelos == 's' && mamifero == 's' && altura == 150) {
        printf("O animal é um cavalo!\n");
    } 
    else if (pelos == 's' && mamifero == 's' && altura <= 100) {
        printf("O animal é um cachorro!\n");
    } 
    else if (pelos == 'n' && mamifero == 'n') {
        printf("O animal é uma serpente!\n");
    } 
    else if (pelos == 'n' && mamifero == 's') {
        printf("O animal é uma tartaruga!\n");
    } 
    else {
        printf("Não foi possível classificar o animal!\n");
    }

    return 0;
}
