#include <stdio.h>
void clear()
{
printf("\033[2J");						
/* Czysci ekran */
printf("\033[0;0f"); 					
/* Ustawia kursor w lewym, gornym rogu */
}
int main() 
{
clear();
	int n;
	int a = 0;
	int b = 1;
	int c;
	
	printf("Podaj liczbe dla ktorej zostanie wyliczony ciag : ");
	scanf("%d",&n); 
	
	for(int i = 0; i < n; ++i)
	{
		c = a+b;
		a = b;
		b = c;
	}
	printf("Liczba Fibonaciego dla podanej cyfry %d to %d\n", n, a);
	printf("\n\n");
	
	
	return 0;
}
