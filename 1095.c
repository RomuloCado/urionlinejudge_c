//Exercício 1095

#include<stdio.h>

int main(){
	
	int i, j;
	i = 1;
	j = 60;
	
	while(j>=0){
		printf("I=%d J=%d\n", i, j);
		i += 3;
		j -= 5;
	}

	return 0;
}
