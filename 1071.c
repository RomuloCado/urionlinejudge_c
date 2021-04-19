//Exercício 1071

#include<stdio.h>

int main(){
	
	int n1, n2, i, aux=0, soma=0;
	
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	for(i=n1; i<n2; i++){
		if(i % 2 != 0 && i!=n1){
			soma += i;
		}
	}
	printf("%d\n", soma);
	return 0;
}
