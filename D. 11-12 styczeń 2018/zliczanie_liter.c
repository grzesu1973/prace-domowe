// Grzegorz Jarzyński SSINF2017 grupa 2
// program do zliczania występowania liter w ciągu (liczy małe i duże litery razem)


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// funkcja do czyszczenia ekranu
void clear()
{
printf("\033[2J");						
printf("\033[0;0f"); 					
}

bool czy_znak(char znak)
{
	if((znak>='a'&&znak<='z')||(znak>='A'&&znak<='Z'))
		return true;
	else
		return false;
}

void zlicz(char* ciag, int* histogram)
{
	int i=0;
	while(ciag[i])
	{
		if(czy_znak(ciag[i]))
		{
			if(ciag[i]>='a')
				histogram[ciag[i]-'a']++;
			else
				histogram[ciag[i]-'A']++;
		}
		i++;
	}
}

void wypisz(char* ciag, int* histogram)
{
	int i;
	printf("%s\n\n",ciag);
	for(i=0;i<26;i++)
	{
		printf("  %c",i+'a');
	}
	puts("");
	
	for(i=0;i<26;i++)
	{
		printf("%3d",histogram[i]);
	}
	puts("\n");
}

int main()
{
	char* ciag="Ala ma kota, a kot ma Ale.";	// przykładowy ciąg znaków
	int histogram[26]={0};		// tablica przechowująca zliczone litery
	
	clear();
	zlicz(ciag,histogram);
	wypisz(ciag,histogram);

}
