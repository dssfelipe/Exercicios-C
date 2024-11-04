#include <stdio.h>

int main() {
    
    int i, fatorial, mult=1, temp;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &fatorial);
    
    for(i=1; i <= fatorial; i++){
        temp= i;
        mult *= temp;
    }
    
    printf("O fatorial de %d eh %i",fatorial, mult);
    
    return 0;
}
