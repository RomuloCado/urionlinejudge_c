//Exercício 1009

#include <stdio.h>

int main(){
	
	char nome[20];
	double s, v, bonus;
	
	scanf("%s", &nome);
	scanf("%lf %lf", &s, &v);
	bonus = v * 0.15;
	printf("TOTAL = R$ %.2lf\n", s + bonus );
	
	return 0; 
}
