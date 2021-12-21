#include <stdio.h>
int main(void)
{	
	int n1,n2;
	printf("digite um numero: ");
	scanf("%d", &n1);
	printf("digite outro: ");
	scanf("%d", &n2);
	if(n1 % n2 == 0)
	{
		printf("o %d eh divisivel por %d", n1, n2);
	}
	else
	{
		printf("o numero %d nao eh divisivel por %d", n1, n2);
	}
}
