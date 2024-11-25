#include <stdio.h>

int main() {
    
    float vet[4];
    float soma, media;
    int i = 1;
    
    
   for (i=1; i<5; i++){
       printf("Digite a sua %d� nota: ", i);
       scanf("%f", &vet[i]);
       soma+=vet[i];
   }
   
    media = soma/4;
    
    if (media >= 6){
        printf("\nParabéns você esta aprovado, com a media %.2f", media);
    }else{
        printf("\nInfelizmente você esta reprovado, com a media %.2f", media);
    }
    
    

    return 0;
}
