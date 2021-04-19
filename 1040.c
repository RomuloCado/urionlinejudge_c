//Exercício 1040

int main(){
	
	float n1, n2, n3, n4, media, exame, n;
	
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10;
	printf("Media: %.1f\n",media);
	if (media < 5){
		printf("Aluno reprovado.\n");
	}else if(media >= 5 && media < 7){
		printf("Aluno em exame.\n");
		scanf("%f", &n);
		printf("Nota do exame: %.1f\n",n);
		exame = (media + n)/2;
		if (exame >= 5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",exame);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",exame);
		}
	}else{
		printf("Aluno aprovado.\n");
	}
	return 0; 
}
