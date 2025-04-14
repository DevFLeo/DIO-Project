#include <stdio.h>

int main() {
    int idade, concentracaoGlicose;
    float imc;

    // Leitura dos dados de entrada
    scanf("%d", &idade);
    scanf("%d", &concentracaoGlicose);
    scanf("%f", &imc);

    // Verifica as condições para risco de diabetes
    if (concentracaoGlicose < 120) {
        if (idade > 40) {
            printf("Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos\n");
        } else {
            printf("Você não corre risco de diabetes\n");
        }
    } else if (concentracaoGlicose >= 120 && concentracaoGlicose <= 125 && imc > 27) {
        printf("Você tem uma probabilidade de adquirir diabetes. Procure um médico\n");
    } else if (concentracaoGlicose >= 126) {
        printf("É altamente recomendável que você procure um médico para avaliação\n");
    }

    return 0;
}
