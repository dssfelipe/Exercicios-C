#include <stdio.h>

int main() {
    int v[6], i;

    // Entrada de dados
    for (i = 0; i < 6; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Exibição em ordem inversa
    printf("\nOrdem inversa do vetor:\n");
    for (i = 5; i >= 0; i--) { // Percorre o vetor do último elemento ao primeiro
        printf("%d ", v[i]);
    }

    return 0;
}

