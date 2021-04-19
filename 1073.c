//Exercício 1073

#include<stdio.h>
#include<math.h>

int main(){
	
	int n, cont=2;
	
	scanf("%d", &n);
	if (n > 5 && n <2000){
		while (cont <= n){
			printf("%d^%d = %.0f\n", cont, 2, pow(cont,2));
			cont+=2;
		}
	}
	return 0;
}
