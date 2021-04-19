//Exercício 1051

#include<stdio.h>

int main(){
	
	double n, imposto = 0;
	
	scanf("%lf", &n);
	if (n <= 2000){
		printf("Isento\n");
	}else{
		if(n <= 3000){
			imposto = (n - 2000) * 0.08;
		}else if (n <= 4500){
			imposto = (1000 * 0.08) + (n - 3000) * 0.18;
		}else{
			imposto = (1000 * 0.08) + (1500 * 0.18) + (n - 4500) * 0.28; 
		}
		printf ("R$ %.2lf\n", imposto);
    } 
	return 0;
}
