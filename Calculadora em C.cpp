#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void realizarSoma(){
	int i, qtd;
	float soma, num[100];
	
	fflush(stdin);
	printf("Digite o numero a ser adiciondo: ");
	scanf("%f", &soma);
	printf("Digite a quantidade de numeros a serem adicionados: ");
	scanf("%d", &qtd);
	
	for(i=0; i<qtd; i++){
		printf("Digite o %do numero a ser somado: ", i+1);
		scanf("%f", &num[i]);
   		soma+=(num[i]);
	}
	printf("%.2f\n\n", soma);
}

void realizarSub(){
	int i, qtd;
	float sub, num[100];
	
	fflush(stdin);
	printf("Digite o numero a ser subtraido: ");
	scanf("%f", &sub);
	printf("Digite a quantidade de numeros a serem subtraidos: ");
	scanf("%d", &qtd);
	
	for (i=0; i<qtd; i++){
		printf("Digite o %do numero a ser adicionado: ", i+1);
		scanf("%f", &num[i]);
    	sub-=(num[i]);
	} 
	printf("%.2f\n\n", sub);
}

void realizarMult(){
	int i, qtd;
	float mult, num[100];
	
	fflush(stdin);
	printf("Digite o numero a ser multiplicado: ");
	scanf("%f", &mult);
	printf("Digite a quantidade de numeros a serem multiplicados: ");
	scanf("%d", &qtd);
	
	for(i=0; i<qtd; i++){
		printf("Digite o %do numero a ser adicionado: ", i+1);
		scanf("%f", &num[i]);
		mult*=(num[i]);
	}
	printf("%.2f\n\n", mult);
}


void realizarDiv(){
	int i=0, qtd;
	float div, sor, num[100];
	
	fflush(stdin);
	printf("Digite o numero a ser dividido: ");
	scanf("%f", &sor);

	printf("Digite o divisor a ser adicionado: ", i);
	scanf("%f", &num[i]);
	div=(sor/num[i]);
	
	printf("%.2f\n\n", div);
}

void realizarSqrt(){
	float numquad, rquad;
	
	fflush(stdin);
	printf("Digite o numero a ter a raiz quadrada calculada: ");
	scanf("%f", &numquad);
			
	rquad=sqrt(numquad);
		
	printf("A raiz de %.2f eh: %.2f\n", numquad, rquad);
}

void realizarCbrt(){
	float rcb, numcb;
	
	fflush(stdin);
	printf("Digite o numero a ter a raiz cubica calculada: ");
	scanf("%f", &numcb);
				
	rcb=cbrt(numcb);
				
	printf("A raiz do numero %.2f eh: %.2f\n\n",numcb, rcb);
}

void realizarQuadratica(){
	float a, b, c, delta, raiz1, raiz2;
	
	fflush(stdin);
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
				
	delta=(b*b)-(4*a*c);
				
	if(delta>0)
	{
		raiz1=(-b+sqrt(delta))/2*a;
		raiz2=(-b-sqrt(delta))/2*a;
		printf("O delta da equacao eh: %.2f\n", delta);
		printf("A primeira raiz da equacao eh: %.2f\n", raiz1);
		printf("A segunda raiz da equacao eh: %.2f\n", raiz2);
	}else if(delta==0){
		printf("Delta nulo so possui uma raiz.\n");
		raiz1=-b/2*a;
		printf("A raiz eh %.2f\n", raiz1);
	}else{
		printf("A equacao nao possui raiz.\n\n");
	}
}

void realizarPot(){
	int i, qtd;
	float numpot, pot, respot;
	
	fflush(stdin);
	printf("Digite a quantidade de numeros a serem calculados: ");
	scanf("%d", &qtd);
				
	for(i=0; i<qtd; i++){
		printf("Digite o %do numero a ter a potencia calculada: ", i+1);
		scanf("%f", &numpot);
		printf("Digite a potencia do %do numero a ser calculada: ", i+1); 
		scanf("%f", &pot);
					
		respot=pow(numpot,pot);
					
		printf("A resultado de %.2f elevado a %.2f potencia eh: %.2f\n\n", numpot, pot, respot);
	}
}

int main(){
	int op;
	
	do{
		system("cls");
		
		printf("Bem vindo ao menu de contas!\n");
		printf("Digite 1 para realizar uma conta de adicao;\n");
		printf("Digite 2 para realizar uma conta de subtracao;\n");
		printf("Digite 3 para realizar uma conta de multiplicacao;\n");
		printf("Digite 4 para realizar uma conta de divisao;\n");
		printf("Digite 5 para realizar uma conta de uma raiz quadrada;\n");
		printf("Digite 6 para realizar uma conta de raiz cubica;\n");
		printf("Digite 7 para resolver uma funcao quadratica;\n");
		printf("Digite 8 para resolver uma conta de potencia.\n");
		printf("Digite 0 para sair.\n");
		printf("\n\n\n");
		printf("OPCAO: ");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				system("cls");
				realizarSoma();
				system("pause");
				break;
				
			case 2:
				system("cls");
				realizarSub();
				system("pause");
				break;
				
			case 3:
				system("cls");
				realizarMult();
				system("pause");
				break;
			
			case 4:
				system("cls");
				realizarDiv();
				system("pause");
				break;
			
			case 5:
				system("cls");
				realizarSqrt();
				system("pause");
				break;
				
			case 6:
				system("cls");
				realizarCbrt();
				system("pause");
				break;
				
			case 7:
				system("cls");
				realizarQuadratica();
				system("pause");
				break;
			
			case 8:
				system("cls");
				realizarPot();
				system("pause");
				break;
				
			case 0:
				system("cls");
				system("pause");
				break;
				
			default:
				system("cls");
				printf("OPERACAO INVALIDA!!!");
				printf("\n\n");
				system("pause");
				break;
		}
		
	}while (op!= 0);
}
