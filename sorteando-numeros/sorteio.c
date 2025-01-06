#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para srand(time(NULL))

int main() {
    srand(time(NULL)); // Semente para números aleatórios (baseado no horário atual)
    int numero = rand() % 100 + 1; // Gera número entre 1 e 100
    int i; // Variável de controle de repetição
    int usuario;

    printf("\nTemos um número gerado aleatoriamente. Tente acertar digitando um número de 1 a 100.\n");

    for (i = 1; i <= 10; i++) {
        printf("Tentativa %d de 10: ", i);
        scanf("%d", &usuario);

        if (usuario == numero) {
            printf("Parabéns! Você acertou o número!\n");
            break; // Sai do loop se o jogador acertar
        } else if (usuario < numero) {
            printf("O número sorteado é maior. Tente de novo.\n");
        } else if (usuario > numero) {
            printf("O número sorteado é menor. Tente de novo.\n");
        }
    }

    if (usuario != numero) { // Verifica se o jogador não acertou após 10 tentativas
        printf("\nGame over! O número correto era: %d\n", numero);
    }

    return 0;
}
