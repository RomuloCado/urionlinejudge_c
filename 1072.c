//Exercício 1072

#include<stdio.h>

int main(){
	
	int n1, n2, cont=0, in=0, out=0;
	
	scanf("%d", &n1);
	if(n1 < 10000){
		while(cont < n1){
			scanf("%d", &n2);
			if (n2 >= 10 && n2 <= 20){
				in++;
			}else{
				out++;
			}
			cont++;
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}
