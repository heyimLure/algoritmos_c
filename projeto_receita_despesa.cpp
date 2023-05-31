#include<stdio.h>
#include<string.h>

main(){
	int i, qnt;
	
	struct PROJETO{
		int num;
		float val;
		float desp;
		float rec;
		char tipo[10];
	};
	struct PROJETO projeto[10];
	
	printf("Digite quantos projetos serão cadastrados (MAX 10): ");
	scanf("%d", &qnt);
	
	do{
		fflush(stdin);
		for(int x=0; x<qnt; x++){
			printf("Digite o id do projeto: ");
			scanf("%d", &projeto[i].num);
			printf("Digite o valor do projeto %d: ", x);
			scanf("%f", &projeto[i].val);
			fflush(stdin);
			printf("Digite o tipo do projeto %d: ", x);
			gets(projeto[i].tipo);
			fflush(stdin);
			
			if(!strcmp(projeto[i].tipo,"receita")){
				printf("Digite a quantia a ser somada ao saldo do projeto %d: ", x);
				scanf("%f", &projeto[i].rec);
				fflush(stdin);
				printf("O valor final do projeto %d foi de: %.2f\n",x, projeto[i].val+projeto[i].rec);
			}else
			if(!strcmp(projeto[i].tipo,"despesa")){
				printf("Digite o valor a ser subtraido ao saldo do projeto %d: ", x);
				scanf("%f", &projeto[i].desp);
				printf("O valor final do projeto %d foi de: %.2f\n",x, projeto[i].val-projeto[i].desp);
			}
		}	
	}while(projeto[i].num!=-1);
	
}
