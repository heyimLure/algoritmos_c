#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() 
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int mat[3][3], i, j, a=1, mai, men, linmai, colmai, linmen, colmen;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat[i][j]=10+rand()%21;
		}
	}
	printf("Matriz inicial: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d	",mat[i][j]);
		}
		printf("\n");
	}
	
	while(a!=5){
			printf("\nDigite no teclado:");
			printf("\n1) Imprimir o maior e o menor elemento (inteiro) da matriz e sua posição");
			printf("\n2) Percorrer a matriz utilizando comando de laço (for ou while) e imprimir apenas os números impares");
			printf("\n3) Imprimir a matriz de trás para frente mantendo a estrutura da mesma");
			printf("\n4) Imprimir a matriz exceto a diagonal principal da matriz, mantendo sua estrutura");
			printf("\n5) Sair\n");
		scanf("%d",&a);
		
		switch(a){
		case 1:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						 if (i == 0 and j==0)
						 {
						 	
	           				mai = mat[i][j];
	           				men = mai;
	           			}
						   else if (mat[i][j] > mai) 
						   {
	           				mai = mat[i][j];
	           				linmai=i;
	           				colmai=j;
	           			}
						   else if (mat[i][j] < men)
						   {
	           				men = mat[i][j];
	           				linmen=i;
	           				colmen=j;
	       				}
	  				}
				}
				printf("\nMaior: %d na posição %dx%d\n", mai, linmai+1, colmai+1);
				
				printf("Menor: %d na posição %dx%d\n", men, linmen+1, colmen+1);  
				break;
	
			case 2:
				printf("\nNúmeros ímpares na matriz:\n");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						if(mat[i][j]%2!=0)
						{
							printf("%d	", mat[i][j]);
						}else
						{
							printf("	");
						}
					}
					printf("\n");
				}
				break;
			
			case 3:
				for(i=2; i>=0; i--){
					for(j=2;j>=0;j--){
						printf("%d	",mat[i][j]);
					}
				printf("\n");
				}
			break;
			
			case 4:
				for(i=0; i<3; i++)
				{
					for(j=0;j<3;j++)
					{
						if(i==j)
						{
							printf("	");
						}else{
							printf("%d	",mat[i][j]);
						}
					}
				printf("\n");
				}
			break;				
		}
			
	}
	
}
