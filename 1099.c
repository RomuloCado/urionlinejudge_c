//Exercício 1099

#include<stdio.h>

int main(){
	
	int n, x , y, aux = 0, somaimp=0, i, j;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		if(x > y){
			aux = x;
			x = y;
			y = aux;
		}
		for(j=x+1; j<y; j++){
			if(j%2!=0){
				somaimp += j;
			}
		}
		printf("%d\n", somaimp);
		somaimp = 0; 	
	}
	return 0;
}
