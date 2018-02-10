#include <stdio.h>
#include <stdlib.h>

void clear()
{
printf("\033[2J");							/* Czyści ekran */
printf("\033[0;0f"); 						/* Ustawia kursor w lewym, górnym rogu */
}

//literacyjnie
int nwd_l(int a, int b) 
{
	int c;
    while (b != 0)
    {
		c=a%b;
		a=b;
		b=c;
	}
    return a;
}

//rekurencyjnie
int nwd_r(int a, int b)
{
	if(b==0){
		return a;
	}
	else{
    return nwd_r(b,a%b);
	}
}
	



void pokaz_nwd(int a, int b)
{
	if(a||b)	// jeśli obie cyfry są lub jedna z nich jest różna od zera...
		//printf("%d\n",nwd_l(abs(a),abs(b))); //literacynie
		printf("%d\n",nwd_r(abs(a),abs(b))); //rekurencyjnie
	else		// .. jeśli obie cyfry są równe 0
		printf("nie mozna wyznaczyc wspolnego dzielnika\n");
}

int main()
{
    int a, b;
	clear();
	
	printf("Obliczanie NWD - najwiekszego wspolnego dzielnika\n");

	printf("           Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("              Podaj druga liczbe: ");
	scanf("%d", &b);
	printf("\nNajwiększy Wspólny Dielnik(%d,%d) = ", a, b);
	pokaz_nwd(a,b);
	printf("\n");
    return 0;
}
