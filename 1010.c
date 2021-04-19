//Exercício 1010

#include <stdio.h>

int main(){
	
	int codigo1, p1, codigo2, p2;
	double v1, v2, total;
	
	scanf("%d %d %lf", &codigo1, &p1, &v1);
	scanf("%d %d %lf", &codigo2, &p2, &v2);
	total = v1 * p1 + v2 * p2;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	
	return 0;
} 
