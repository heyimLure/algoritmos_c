#include<stdio.h>
//Lista de exercícios: introdução ao MIPs.
//4) IRPF

#include<stdio.h>
//Lista de exercícios: introdução ao MIPs.
//2) INSS

main(){
		float bruto, liquido, desc, d1, d2, d3, ali, ded, faixa;
		
		printf("Digite a quantia de seu salario: \n");
		scanf("%f", &bruto);
		
		if(bruto<=1903.98){
			liquido=(bruto-desc);
			printf("Voce foi isento de pagar imposto.\n");
			printf("O valor do seu salario final é de: %.2f\n", liquido);
		}
		else if(bruto>1903.98 && bruto<=2.826.65){
			base=1903.98;
			ali=7.5;
			desc=(bruto-base)*0.075;
			d1=(2.826.65*0.075);
			liquido=(bruto-desc);
			printf("O valor da sua contribuicao pro governo eh de: %.2f\n", desc);
			printf("O valor do seu salario final é de: %.2f\n", liquido);
		}
		else if(bruto>2.826,65 && bruto<=3.751.05){
			base=2.826,65;
			ali=15;
			desc=(bruto-base)*0.15;
			d2=(3.751.05*0.15);
			liquido=(bruto-(desc+d1));
			printf("O valor da sua contribuicao pro governo eh de: %.2f\n", desc);
			printf("O valor do seu salario final é de: %.2f\n", liquido);
		}
		else if(bruto>3.751,05 && bruto<=4.664.68){
			base=3.751,05;
			ali=22.5;
			desc=(bruto-base)*0.225;
			d3=(4.664.68*0.225);
			liquido=(bruto-(desc+d2));
			printf("O valor da sua contribuicao pro governo eh de: %.2f\n", desc);
			printf("O valor do seu salario final é de: %.2f\n", liquido);
		}
		else{
			base=4.664.68;
			ali=27.5;
			desc=(bruto-base)*0.275;
			liquido=(bruto-(desc+d3));
			printf("O valor da sua contribuicao pro governo eh de: %.2f\n", desc);
			printf("O valor do seu salario final é de: %.2f\n", liquido);
		}
		
		printf("\n");
		printf("--------------------------------------------------\n");
		printf("Salario de contribuicao\t|\t Aliquota\t|\tDescontos|\tSalario Final\n");
		printf("\t\t%.2f\t|\t%.2f\t\t|\t%.2f\t%.2f\n", bruto, ali, liquido);
		printf("\n--------------------------------------------------\n");
}
