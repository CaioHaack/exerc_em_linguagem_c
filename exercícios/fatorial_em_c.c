#include <stdio.h>
int main(void)
{	
	int fat, i, resultado= 0, fatorial; /* resultado estava apresentando lixo de mem�ria*/
	printf("digite um numero: "); 
	scanf("%d", &fat);
	fatorial= fat;
	
	for(i= fat-1; i>=2; i--) /* loop para calcular o fatorial de um numero*/
	{
		fat= fat*i; /* essa f�rmula se auto alimenta conforme o loop progride */
	
		
	}
		printf("%d!: %d\n",fatorial, fat);
}
	
	
