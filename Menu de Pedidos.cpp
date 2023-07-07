#include <stdio.h>
#include <stdlib.h>

struct FRUTA{
	char nome[100];
	int qtd;
	float val;
}; 
struct FRUTA fruta[10];

struct LIMPEZA{
	char nome[100];
	int qtd;
	float val;
};
struct LIMPEZA limpeza[10];

struct HORTA{
	char nome[100];
	int qtd;
	float val;
};
struct HORTA horta[10];

struct CARNE{
	char nome[100];
	int qtd;
	float val;
};
struct CARNE carne[10];

int i=0;

void pedirFrutas(){
	int op;
	do{
		fflush(stdin);
		printf("Digite o nome da fruta que desejas pedir: ");
		gets(fruta[i].nome);
		printf("Digite o valor unitario da %s: ", fruta[i].nome);
		scanf("%f", &fruta[i].val);
		printf("Quantas %ss desejas comprar? ", fruta[i].nome);
		scanf("%d", &fruta[i].qtd);
	
		printf("\n%s\n", fruta[i].nome);
		printf("%f\n", fruta[i].val);
		printf("%d\n", fruta[i].qtd);
			
		printf("Deseja pedir outra fruta? Se sim, digite 1. Se nao, digite 0. ");
		scanf("%d", &op);
		i++;
		
	}while(op != 0);
}

void pedirLimpeza(){
	int op;
	do{
		fflush(stdin);
		printf("Digite o nome do produto de limpeza que desejas pedir: ");
		gets(limpeza[i].nome);
		printf("Digite o valor unitario da %s: ", limpeza[i].nome);
		scanf("%f", &limpeza[i].val);
		printf("Quantos %ss desejas comprar? ", limpeza[i].nome);
		scanf("%d", &limpeza[i].qtd);
		printf("Deseja pedir outro produto de limpeza? Se sim, digite 1. Se nao, digite 0. ");
		scanf("%d", &op);
		i++;
	}while(op != 0);
}

void pedirHorta(){
	int op;
	do{
		fflush(stdin);
		printf("Digite o nome da hortalica que desejas pedir: ");
		gets(horta[i].nome);
		printf("Digite o valor unitario da %s: ", horta[i].nome);
		scanf("%f", &horta[i].val);
		printf("Quantos %ss desejas comprar? ", horta[i].nome);
		scanf("%d", &horta[i].qtd);
		printf("Deseja pedir outra hortalica? Se sim, digite 1. Se nao, digite 0. ");
		scanf("%d", &op);
		i++;
	}while(op != 0);
}

void pedirCarnes(){
	int op;
	do{
		fflush(stdin);
		printf("Digite o nome da carne que desejas pedir: ");
		gets(carne[i].nome);
		printf("Digite o valor unitario da %s: ", carne[i].nome);
		scanf("%f", &carne[i].val);
		printf("Quantos %ss desejas comprar? ", carne[i].nome);
		scanf("%d", &carne[i].qtd);
		printf("Deseja pedir outra carne? Se sim, digite 1. Se nao, digite 0. ");
		scanf("%d", &op);
		i++;
	}while(op != 0);
}

void valorFinal(){
	float valFin=0;
	
	for(i=0; i<10; i++){
		//printf("%d\t %.2f\n", fruta[i].qtd, fruta[i].val);
		//printf("%d\t %.2f\n", limpeza[i].qtd, limpeza[i].val);
		
		valFin+=((fruta[i].val*fruta[i].qtd)+(limpeza[i].val*limpeza[i].qtd)+(horta[i].val*horta[i].qtd)+(carne[i].val*carne[i].qtd));
	}
	
	printf("O valor final do seu pedido foi de: %.2f reais. ", valFin);
}

main(){
	int op;
	
	do{
		system("cls");
		
		printf("Bem vindo ao menu de pedidos do Mercadinho do Silva!\n\n");
		printf("Digite 1 para fazer seu pedido de frutas!\n");
		printf("Digite 2 para fazer seu pedido de produtos de limpeza!\n");
		printf("Digite 3 para fazer seu pedido de hotalicas!\n");
		printf("Digite 4 para fazer seu pedido de carnes!\n");
		printf("Digite 5 para checar o valor final do pedido!\n");
		printf("Digite 0 para sair.\n");
		printf("OBS: NO MAXIMO 10 ITENS POR PEDIDO!\n");
		printf("\n\n");
		printf("OPCAO: ");
		
		scanf("%d", &op);
	
		
		switch(op){
			case 1:
				system("cls");
				pedirFrutas();
				system("pause");
				break;
			
			case 2:
				system("cls");
				pedirLimpeza();
				system("pause");
				break;
			
			case 3:
				system("cls");
				pedirHorta();
				system("pause");
				break;
				
			case 4:
				system("cls");
				pedirCarnes();
				system("pause");
				break;
				
			case 5:
				system("cls");
				valorFinal();
				system("pause");
				break;
				
			case 0:
				printf("Saindo do sistema.\n");
				system("pause");
				break;
			
			default:
				printf("Opcao invalida.\n");
				system("pause");
				system("cls");
				break;
			
		}
		
	}while(op != 0);
}
