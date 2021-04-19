//Exercício 1172

#include<stdio.h>

int main(){
	
	int vetx[10], i;
	
	for (i=0; i<10; i++){
		scanf("%d", &vetx[i]);
		if (vetx[i] <=0){
			vetx[i] = 1;
		}
	}
	
	for(i=0; i<10; i++){
		printf("X[%d] = %d\n", i, vetx[i]);
	}
	
	return 0;
}
