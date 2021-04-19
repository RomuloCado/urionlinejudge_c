//Exercício 1045

#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c, aux = 0;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a < b){
		aux = a;
		a = b;
		b = aux;
	} 
	if(b < c){
		aux = b;
		b = c;
		c = aux;
	}
	if(a < b){
		aux = a;
		a = b;
		b = aux;
	}
	if(a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if(pow(a,2)== pow(b,2)+pow(c,2)){
			printf("TRIANGULO RETANGULO\n");
		}
		if(pow(a,2) > pow(b,2)+pow(c,2)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(pow(a,2) < pow(b,2)+pow(c,2)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a == b && b ==c){
			printf("TRIANGULO EQUILATERO\n");
		}
		if(a == b && c != a || b == c && a!=b || a == c && b!=a){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
		return 0;
}
