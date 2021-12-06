#include <stdio.h>
int main(void)
{
	int tempo;
	float v_Media, distancia, litros_usados;
	printf("digite o tempo gasto (horas): ");
	scanf("%d", &tempo);
	printf("digite a velocidade media: ");
	scanf("%f", &v_Media);
	distancia= v_Media * tempo;
	litros_usados= distancia/12.0;
	printf("a qtd de litros foi: %0.1f L\n", litros_usados);
	printf("o tempo do percurso foi de: %d h\n", tempo);
	printf("a velocidade media foi de %0.1f km/h\n", v_Media);
	printf("a distancia percorrida foi de %0.2f km\n", distancia);
	
	
	
	
}
