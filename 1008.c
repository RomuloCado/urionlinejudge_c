//Exercício 1008

#include <stdio.h>

int main(){
	
	int n, h;
	double valor;
	
	scanf("%d %d %lf", &n, &h, &valor);
	printf("NUMBER = %d", n);
	printf("\nSALARY = U$ %.2lf\n", h * valor);
	
	return 0;
}
