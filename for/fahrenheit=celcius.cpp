#include <stdio.h>
#include <stdlib.h>

int main (){
	int F=40;
	float C;
	
	for(F;F<=70;F++){
		C=5.0/9.0*(F-32);
		printf("%dF = %fC\n", F, C);
	}
}
