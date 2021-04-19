//Exercício 1042

#include<stdio.h>

int main(){
	
	int a, b, c, aux = 0, n1, n2, n3;
	
	scanf("%d %d %d", &a, &b, &c);
	n1 = a;
	n2 = b;
	n3 = c;
	
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	} 
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("\n");
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
		
	return 0;
}
