#include<stdio.h>
#include<string.h>

	struct FICHA_LIVRO{
		int cod;
		int vol;
		char editora[50];
		char nome[100];
	};
	struct FICHA_LIVRO ficha_livro[10];

void listar(int i; int ficha_livro[i].nome; int ficha_livro[i].cod; int codigo){
	printf("Digite o codigo do livro que desejas filtrar: \n");
	scanf("%d", &codigo);
	
	printf("Os livros lançados com o codigo %d são: \n", codigo);
	for(int j=0; j<i; j++){
		if(ficha_livro[j].cod==codigo){
			
			printf("%s\n", ficha_livro[j].nome);
		}
	}
}

int main(){
	int op, i=0, x;
	int codigo;
	
	do{
		printf("Bem vindo ao menu de cadastro de livros. \n");
		printf("Digite 1 para cadastrar um livro. \n");
		printf("Digite 0 para sair do menu.\n");
		fflush(stdin);
		scanf("%d", &op);
		
		switch(op){
			case 1:
				do{
					fflush(stdin);
					printf("Digite o nome do livro que desejas cadastrar.\n");
					gets(ficha_livro[i].nome);
					printf("Digite o codigo do livro que desejas cadastrar.\n");
					scanf("%d", &ficha_livro[i].cod);
					printf("Digite o volume do livro que desejas cadastrar.\n");
					scanf("%d", &ficha_livro[i].vol);
					fflush(stdin);
					printf("Por ultimo, digite o nome da editora do livro que desejas cadastrar.\n");
					gets(ficha_livro[i].editora);
					
					printf("Digite 1 para cadastrar outro livro.\n");
					printf("Digite 0 para voltar ao menu principal.\n");
					scanf("%d", &x);
					i++;
				}while(x==1);
			}
	}while(op==1);
	
	
	fflush(stdin);
	
	listar(ficha_livro[i].nome, ficha_livro[i.cod, codigo]);
	return 0;
}
