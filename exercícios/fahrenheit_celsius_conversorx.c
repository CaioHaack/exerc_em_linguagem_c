#include <stdio.h>
int main(void)
{	
	void fahrenheit(float x);
	void celsius(float y);
	int decision; 
	printf("digite 1 para converter c->f: \n");
	printf("digite 2 para converter f->c: \n");
	scanf("%d", &decision);
	
		if(decision==1)
	{
		
		printf("digite a temperatura em celsius: ");
		float celsius;
		scanf("%f", &celsius);
		fahrenheit(celsius); /* função sendo chamada*/	
			
	}
		else if(decision==2)
	{
		printf("digite a temperatura em graus fahrenheit: ");
		float f;
		scanf("%f", &f);
		celsius(f);
		
		
	}
	
	
	
}


void celsius(float y)
{
	float c;
	c= (y-32) * (5.0/9.0);
	printf("%0.1f", c);
}
void fahrenheit(float x)
{
	float t;
	t= (x * 9 + 160)/5;
	printf("%0.1f", t);
	
}

