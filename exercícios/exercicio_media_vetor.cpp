#include <stdio.h>
//programa que leia 4 notas de 0 a 10 do tipo float, de 4 alunos
// dados armazenados numa matriz bidimensional
//faça a media das notas de cada aluno e armazene as 4 medias num vetor.
// por ultimo apresenta na tela a media de cad aluno
int main()
{
	float notas[4][4];
	int i, j;
	float media[4];
	
	while(1==1)
{
	
	for(i=0; i<4;i++)
	{
		for(j=0; j<4; j++)
		{	
			printf("digite a nota numero %d do aluno %d, ",j+1, i+1);
			scanf("%f", &notas[i][j]);
		
		}
	}
	for(i= 0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{	
			
			media[i]= media[i] + notas[i][j];
		}
		media[i]= media[i]/4;
		printf("%0.1f\n", media[i]);	
	}
	printf("se quiser parar digite ctrl+c");
}

	
}
