//Exercício 1060

#include<stdio.h>

int main(){
	
	int i, soma=0;
	float n;
	
	for(i=1; i<=6; i++){
		scanf("%f", &n);
		if(n > 0){
			soma +=1;
		}
	}
	printf("%d valores positivos\n", soma);
	return 0;
}
