//Exercício 1002

#include <stdio.h>
#include <math.h> 

int main(){
	
	double n, raio, area;
	n = 3.14159;
	scanf("%lf", &raio);
	area = n * pow(raio, 2);
	printf("A=%0.4lf\n", area);
	
	return 0;
}
