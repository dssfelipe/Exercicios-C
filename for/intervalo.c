#include <stdio.h>

int main(){
	
	int n1, n2, ax;
	
	printf("Digite o valor de N1: ");
	scanf("%d", &n1);
	printf("Digite o valor de N2: ");
	scanf("%d", &n2);
	
	
	if(n1>n2){
		ax=n1;
		n1=n2;
		n2=ax;
		
	}
	while(n1<=n2){
		printf("%d ", n1);
		n1++;
	}
	
	
}
