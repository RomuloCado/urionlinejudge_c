//Exercício 1038
#include<stdio.h>

int main(){
	
	int n, t;
	float total;
	
	scanf("%i %i", &n, &t);
	if(n == 1){
		total = 4 * t;
		printf("Total: R$ %.2f\n", total);
	}else if(n == 2){
		total = 4.5 * t;
		printf("Total: R$ %.2f\n", total);
	}else if(n == 3){
		total = 5 * t;
		printf("Total: R$ %.2f\n", total);
	}else if(n == 4){
		total = 2 * t;
		printf("Total: R$ %.2f\n", total);
	}else{
		total = 1.5 * t;
		printf("Total: R$ %.2f\n", total);
	}
	return 0;
}
