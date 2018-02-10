#include <stdio.h>


void clear()
{
printf("\033[2J");							/* Czyści ekran */
printf("\033[0;0f"); 						/* Ustawia kursor w lewym, górnym rogu */
}

void dodaj(double a,double b)
{
	printf("Wynik dodawania: %g\n",a+b);
}
void odejmij(double a,double b)
{
	printf("Wynik odejmowania: %g\n",a-b);
}
void mnoz(double a,double b)
{
	printf("Wynik mnozenia: %g\n",a*b);
}

void dziel(double a,double b)
{
	if(b)	printf("Wynik dzielenia: %g\n",a/b);
	else	printf("Nie mozna podzielic przez ZERO\n");
}

void clearb(){while(getchar()!='\n');}

int licz(double a,double b, char wybor)
{
	switch(wybor)
	{
		case '+':
			dodaj(a,b);
			break;
		case '-':
			odejmij(a,b);
			break;
		case '*':
			mnoz(a,b);
			break;
		case '/':
			dziel(a,b);
			break;
		default:
			printf("Podales nieodpowiedni znak!\n");
	}
	return 1;
}


int main(void)
{
	double a, b;
	char wybor;
	int czy_dalej=1;
	
	clear();
	
	printf("Prosty dodawania - odejmowania - mnożenia - dzielenia \n");
	while(czy_dalej==1)
	{
		printf("\n");
		printf("Podaj pierwsza cyfra: ");scanf("%lf",&a);clearb();
		printf("Podaj podaj druga cyfra: ");scanf("%lf",&b);clearb();
		printf("Podaj dodawanie wpisz +,\nodejmowanie wpisz -,\nmnożenie wpisz *,\ndzielenie wpisz / ,\npodaj jaka operacje wykonac :");scanf("%c",&wybor);clearb();

		licz(a,b,wybor);
		
		printf("\nLiczyc dajel? (1 - TAK, 0 - NIE): ");
		scanf("%d",&czy_dalej);
		clearb();
		clear();
	}

	return 0;
}

