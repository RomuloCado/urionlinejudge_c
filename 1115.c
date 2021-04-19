//Exercício 1115

#include<stdio.h>

int main(){
	
	float x, y;
	
	while(1){
		scanf("%f %f", &x, &y);
		if (x == 0 || y == 0){
			break;
		}else if(x > 0 && y > 0){
			printf("primeiro\n");
		}else if(x > 0 && y < 0){
			printf("quarto\n");
		}else if(x < 0 && y < 0){
			printf("terceiro\n");
		}else{
			printf("segundo\n");
		}
	}
	return 0;
}
