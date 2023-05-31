 #include<stdio.h>
#include<string.h>

int main(){
	int qtd, x, i;
	char op[2];
	float  num [100];
	float soma, sub, mult, div;
	
	printf("Digite o simbolo da operacao a ser usado: ");
	scanf("%s", &op);
	
	if(!strcmp(op,"+")){
		printf("Digite a quantidade de numeros a serem adicionados: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %d numero a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					soma+=(num[i]);
				}
				printf("%.1f\n\n", soma);
	}else
	if(!strcmp(op,"-")){
		printf("Digite o numero a ser subtraido: ");
				scanf("%f", &sub);
				printf("Digite a quantidade de numeros a serem subtraidos: ");
				scanf("%d", &qtd);
				for (x=0; x<qtd; x++){
				    i++;
					printf("Digite o %d numero a ser adicionado:", x+1);
				    scanf("%f", &num[i]);
    				sub-=(num[i]);
				} 
				printf("%.1f\n\n", sub);
	}else
	if(!strcmp(op,"x")){
		printf("Digite o numero a ser multiplicado: ");
				scanf("%f", &mult);
				printf("Digite a quantidade de numeros a serem multiplicados: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %d numero a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					mult*=(num[i]);
				}
				printf("%.1f\n\n", mult);
	}else
	if(!strcmp(op,"/")){
		printf("Digite o numero a ser dividido: ");
				scanf("%f", &div);
				printf("Digite a quantidade de numeros a serem divididos: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %d divisor a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					div/=(num[i]);
				}
				printf("%.1f\n\n", div);
	}
}
