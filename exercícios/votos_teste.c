/*Desenvolva um programa em C que possua um loop infinito e que receba um inteiro
do telado, se o valor digitado for maior ou igual a 18 anos, 
informe na tela: "Voto obrigatório". Se valor digitado for maior que 15 e menor que 18,
imprima na tela: "voto opcional". Caso contrário escreva na tela: "Proibido votar".
A condição de parada será quando o valor digitado for menor que 1.    
Ao final, o programa deve informar quantas idade com votos opcionais e quantas idades
com votos obrigatórios foram computados.*/
#include <stdio.h>
int main(void)
{
	int years, votos_op= 0, votos_obg= 0;
		while(1==1)
	{	
	
		printf("digite sua idade: \n");
		scanf("%d", &years);
			if(years < 1) 
		{
			break;
		}
			if(years >= 18)
		{
			printf("Voto obrigatorio.\n");
			votos_obg++;
		}
			else if(years > 15 && years < 18)
		{
			printf("Voto opcional.\n");
			votos_op++;
		
		}
			else
		{
			printf("Proibido votar\n");
		}
			printf("**para parar o loop digite um numero abaixo de 1**\n");
	}
	printf("houveram %d voto(s) opcionais e %d voto(s) obrigatorios", votos_op, votos_obg);
}
