//Exercício 1079

#include<stdio.h>

int main(){
	
	int n1, cont=0;
	float a, b, c, soma=0, divisao;
	
	scanf("%d", &n1);
	
	while(cont<n1){
		scanf("%f %f %f", &a, &b, &c);
		divisao = (a * 2 + b * 3 + c * 5)/10;
		printf("%.1f\n", divisao);
		cont++;
	}
	return 0;
}
