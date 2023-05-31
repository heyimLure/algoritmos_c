#include<stdio.h>

int main(){
	int i, op, x, m, a;
	
	struct AGENDA_COMP{
		char compromisso[60];
	};
	struct AGENDA_COMP agenda_comp[5];
	
	struct DATA{
			int dia;
			int mes;
			int ano;
		};
		struct DATA data;
	
	
	do{
		printf("Bem vindo à sua agenda de compromissos.\n");
		printf("Digite 1 para cadastrar um compromisso.\n");
		printf("Digite 0 para sair.\n");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op){
			case 1:
				do{
				fflush(stdin);
				printf("Digite o nome do compromisso: \n");
				gets(agenda_comp[i].compromisso);
				printf("Digite o dia em que o compromisso ocorrera: \n");
				scanf("%d", &data.dia);
				printf("Digite o mês em que o compromisso ocorrera: \n");
				scanf("%d", &data.mes);
				printf("Digite o ano em que o compromisso ocorrera: \n");
				scanf("%d", &data.ano);
				
				printf("Desejas cadastrar outro comprimisso? Se sim, digite 1. \n");
				printf("MAX DE 5 COMPROMISSOS!\n");
				scanf("%d", &x);
				if(x>5){
					break;
				}
				fflush(stdin);
			}while(x==1);
			
			case 0:
				break;
				
			default:
				printf("OPCAO INVALIDA");
		}
	}while(op==0);
	
	do{
		printf("Digite o mês e o ano que desejas filtrar:\n");
		scanf("%d %d", &m, &a);
			if(data.mes==m && data.ano==a){
				printf("Nome: %s\n", agenda_comp[i].compromisso);
                printf("Data: %d/%d/%d\n", data.dia, data.mes, data.ano);
				printf("Aperte 0 para sair.\n");
			}
	}while(m!=0);
}
