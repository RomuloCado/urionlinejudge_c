//Exercício 1043

#include<stdio.h>

int main(){
	
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	if (a < b+c && b < a+c && c < a+b){  // se o lado for menor que a soma dos outros dois é triangulo
		printf("Perimetro = %.1f\n", a+b+c);
	}else{
		printf("Area = %.1f\n", (a+b)*c/2); //formula da area de um trapezio
	}
	return 0;
