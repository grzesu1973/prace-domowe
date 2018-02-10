#include <stdio.h>

void clear()
{
printf("\033[2J");							/* Czyści ekran */
printf("\033[0;0f"); 						/* Ustawia kursor w lewym, górnym rogu */
}

unsigned int fib(int n) 
{
	if (n <= 1) 
	{
		return n;
	} 
	else 
	{
		return fib(n - 1) + fib(n - 2);
	}
}



int main() 
{
clear();
	int n;
	char pytanie;

	do
	{
	printf("Podaj liczbę dla której zostanie wyliczony ciąg : ");
	scanf("%d",&n); 
	printf("Liczba Fibonaciego to %d\n", fib(n));
	printf("Czy chesz dalej generować kolejne liczby ciągu ? T/N ");
	scanf(" %c", &pytanie);
	}
	while( pytanie == 'T' || pytanie == 't');
	return 0;
}
