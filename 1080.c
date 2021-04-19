//Exercício 1080

#include<stdio.h>

int main(){
	
	int n, cont=1, maior=0, posmaior=0, i;
	
	for(i=1; i<=100; i++){
		scanf("%d", &n);
		if (n>maior){
			maior = n;
			posmaior = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", posmaior);
	
	return 0;
}
