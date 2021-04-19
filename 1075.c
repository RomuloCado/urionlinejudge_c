//Exercício 1075

#include<stdio.h>

int main(){
	
	int n, cont = 0;
	
	scanf("%d", &n);
	if(n < 10000){
		while(cont < 10000){
			if(cont % n == 2){
				printf("%d\n", cont);
			}
			cont++;
		}
	}
	return 0;
}
