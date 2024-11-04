#include <stdio.h>
#include <unistd.h>

int main() {
    
    int impar, soma; //variaveis
    
    for(impar = 0; impar <= 100; impar++){ //repeticao de numeros até 100
    
        if (impar % 2 == 1){ //verifica numero impar 
            printf("%d ", impar);

            soma += impar; //soma dos numeros impares
        }
    }
    
    printf("\n\n\t%d", soma); //resultado final da soma

    return 0;
}
