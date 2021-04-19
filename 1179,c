//Exercício 1179

#include<stdio.h>

int main(){
	
	int n, par[5], impar[5], vpar=0, vimpar=0, x, y, z, i, a, b;
	
	for(i=0; i<15; i++){
		scanf("%d", &n);
		if(n % 2 ==0){
			par[vpar] = n;
			vpar++;
			if (vpar == 5){
				for(y=0; y<5; y++){
					printf("par[%d] = %d\n",y,par[y]);
				}
				vpar = 0;
			}
		}else{
			impar[vimpar] = n;
			vimpar++;
			if(vimpar == 5){
				for(x = 0 ; x<5; x++){
					printf("impar[%d] = %d\n", x, impar[x]);
				}
				vimpar = 0;
			}
		}
	}
	for(a = 0; a<vimpar; a++){
		printf("impar[%d] = %d\n",a, impar[a]);
	}
	for(b =  0;b<vpar; b++){
		printf("par[%d] = %d\n", b, par[b]);
	}
	
	return 0;
	
}
