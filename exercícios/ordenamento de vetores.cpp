#include <stdio.h>
int main (void){
	int i, vet[10], aux, j;
	
	for(i=0; i<10; i++)
	{
		printf("digite um numero");
		scanf("%d", &vet[i]);	
	}
	
	
// algoritmo ordenamento
for(i=0; i<10; i++)   // permite que o número só seja comparado 
{	vet[i];            // com seu sucessor ao adicionar i+1
	for(j=i+1; j<10; j++)
	{
		if(vet[i]>vet[j])
		{
			aux= vet[j];
			vet[j]= vet[i];
			vet[i]= aux;
		}
	}
}
	for(i=0; i<10; i++)
	{
		printf("%d|", vet[i]);
		
	}


	
	
	
}
