#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	int op, i, qtd, x;
	float soma, sub, mult, div, sor;
	float numquad, rquad, numcb, rcb;
	float a, b, c, delta, raiz1, raiz2;
	float numpot, pot, respot;
	float num[100];
	
	do{
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
		scanf("%d", &op);
		
		system("cls");
		
		switch(op){
			case 1:
				fflush(stdin);
				printf("Digite a quantidade de numeros a serem adicionados: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %do numero a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					soma+=(num[i]);
				}
				printf("%.1f\n\n", soma);
				break;
			
			case 2:
				fflush(stdin);
				printf("Digite o numero a ser subtraido: ");
				scanf("%f", &sub);
				printf("Digite a quantidade de numeros a serem subtraidos: ");
				scanf("%d", &qtd);
				for (x=0; x<qtd; x++){
				    i++;
					printf("Digite o %do numero a ser adicionado:", x+1);
				    scanf("%f", &num[i]);
    				sub-=(num[i]);
				} 
				printf("%.1f\n\n", sub);
				break;
				
			case 3:
				fflush(stdin);
				printf("Digite o numero a ser multiplicado: ");
				scanf("%f", &mult);
				printf("Digite a quantidade de numeros a serem multiplicados: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %do numero a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					mult*=(num[i]);
				}
				printf("%.1f\n\n", mult);
				break;
			
			case 4:
				fflush(stdin);
				printf("Digite o numero a ser dividido: ");
				scanf("%f", &sor);
				printf("Digite a quantidade de numeros a serem divididos: ");
				scanf("%d", &qtd);
				for(x=0; x<qtd; x++){
					i++;
					printf("Digite o %d divisor a ser adicionado: ", x+1);
					scanf("%f", &num[i]);
					div=(sor/num[i])/num[i++];
				}
				printf("%.1f\n\n", div);
				break;
				
			case 5:
				fflush(stdin);
				printf("Digite o numero a ter a raiz calculada: ");
				scanf("%f", &numquad);
				
				rquad=sqrt(numquad);
				
				printf("A raiz de %.2f eh: %.2f\n", numquad, rquad);
				break;
				
			case 6:
			    fflush(stdin);
				printf("Digite o numero a ter a raiz calculada: ");
				scanf("%f", &numcb);
				
				rcb=cbrt(numcb);
				
				printf("A raiz do numero %.2f eh: %.2f\n\n",numcb, rcb);
				break;
				
			case 7:
				fflush(stdin);
				printf("Digite o valor de A: ");
				scanf("%f", &a);
				printf("Digite o valor de B: ");
				scanf("%f", &b);
				printf("Digite o valor de C: ");
				scanf("%f", &c);
				
				delta=(b*b)-(4*a*c);
				
				if(delta>0){
					raiz1=(-b+sqrt(delta))/2*a;
					raiz2=(-b-sqrt(delta))/2*a;
					printf("O delta da equacao eh: %.2f\n", delta);
					printf("A primeira raiz da equacao eh: %.2f\n", raiz1);
					printf("A segunda raiz da equacaoeh: %.2f\n", raiz2);
			 	}else if(delta==0){
					printf("Delta nulo so possui uma raiz.\n");
					raiz1=-b/2*a;
					printf("A raiz eh %.2f\n", raiz1);
				}else{
					printf("A equacao nao possui raiz.\n\n");
				}
				break;
				
			case 8:
				fflush(stdin);
				printf("Digite a quantidade de numeros a serem calculados: ");
				scanf("%d", &qtd);
				
				for(x=0;x<qtd;x++){
					printf("Digite o %do numero a ter a potencia calculada: ", x+1);
					scanf("%f", &numpot);
					printf("Digite a potencia do %do numero a ser calculada: ", x+1); 
					scanf("%f", &pot);
					
					respot=pow(numpot,pot);
					
					printf("A resultado de %.2f elevado a %.2f potencia eh: %.2f\n\n", numpot, pot, respot);
				}
		}
	}while(op!=0);
}
	
