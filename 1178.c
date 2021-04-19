//Exercício 1178

#include<stdio.h>

int main(){
	
	int i;
	double t, vet[100];
	
	scanf("%lf", &t);
	vet[0] = t;
	for(i=0; i<100; i++){
		printf("N[%d] = %.4lf\n", i, vet[i]);
		t/=2;
		vet[i+1]=t;
	}
	return 0;
}
