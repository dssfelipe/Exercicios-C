#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0.0, media;
    float maior, menor;
    int i;

    // Entrada de dados: Ler as notas
    printf("Digite as notas de 15 alunos:\n");
    for (i = 0; i < 15; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];

        // Inicializar maior e menor na primeira iteração
        if (i == 0) {
            maior = menor = notas[i];
        } else {
            if (notas[i] > maior) {
                maior = notas[i];
            }
            if (notas[i] < menor) {
                menor = notas[i];
            }
        }
    }

    // Calcular a média
    media = soma / 15;

    // Exibir os resultados
    printf("\nMedia geral: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}

