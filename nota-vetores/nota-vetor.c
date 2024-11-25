#include <stdio.h>

int main() {
    
    int vet[4];
    int i=0, soma, media;
    
   for (i=1; i<5; i++){
       printf("Digite a sua %d° nota: ", i);
       scanf("%d", &vet[i]);
       soma+=vet[i];
   }
   
    media = soma/4;
    
    if (media >= 6){
        printf("\nParabéns você esta aprovado, com a media %d", media);
    }else{
        printf("\nInfelizmente você esta reprovado, com a media %d", media);
    }
    
    

    return 0;
}