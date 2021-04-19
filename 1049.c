//Exercício 1049

#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[15], s2[15], s3[15], classe1[15], classe2[15], classe3[15];
	
	scanf("%s %s %s", &s1, &s2, &s3);
	strcpy(classe1, s1);
	strcpy(classe2, s2);
	strcpy(classe3, s3);
	if(strcmp(classe1, "vertebrado")==0){
		if(strcmp(classe2, "ave") == 0){
			if(strcmp(classe3, "carnivoro" )==0){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}
		}else{
			if(strcmp(classe3, "onivoro") ==0){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}
		}
	}else{
		if(strcmp(classe2, "inseto") ==0){
			if(strcmp(classe3, "hematofago") ==0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}else{
			if(strcmp(classe3, "hematofago") == 0){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
