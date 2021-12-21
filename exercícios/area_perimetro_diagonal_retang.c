#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Fazer um programa para ler as medidas da base e altura de um retângulo.
Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo,
com quatro casas decimais, conforme exemplos.*/


int main(void)
{
	int base, altura, area, perimetro, diagonal;
	printf("digite o valor da base do retangulo: ");
	scanf("%d", &base);
	printf("digite a altura do retangulo: ");
	scanf("%d", &altura);
	area= base * altura;
	perimetro= 2*base + 2*altura;
	diagonal= (base * base) + (altura * altura);
	printf("A area do retangulo eh %d\n", area);
	printf("o perimetro do retangulo e %d\n", perimetro);
	printf("a diagonal do retangulo eh %d", sqrt(diagonal));
}
