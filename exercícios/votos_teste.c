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
