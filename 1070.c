//Exercício 1070

#include<stdio.h>

int main(){
	
	int n, cont=1;
	
	scanf("%d", &n);
	if(n > 0){
		while(cont<=6){
			if (n%2!=0){
				printf("%d\n", n);
			}else{
				printf("%d\n", n+=1);
			}
		n+=2;
		cont++;
		}
	}

	return 0;
}
