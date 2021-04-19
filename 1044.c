//Exercício 1044

#include <stdio.h>

int main(){
	
	int n1, n2;
	
	scanf("%i %i", &n1, &n2);
	if (n2 % n1 == 0 || n1 % n2 == 0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
