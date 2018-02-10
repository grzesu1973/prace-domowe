# __Systemy liczbowe i ich konwersja__
***
## 1. Dwójkowy system liczbowy ***(binarny)***

Do zapisu liczb w tym systemie wykorzystuje się zaledwie 2 cyfry: 0 i 1.  
Podstawą pozycji zaś są kolejne potęgi liczby 2. 
W praktyce wygląda to tak :
Jak w każdym systemie pozycyjnym o wartości cyfry stanowi pozycja na której ona stoi więc cyfrę stojącą na pierwszej pozycji  mnożymy  razy 2^0^ , a cyfrę na 2 pozycji  mnożymy razy 2^1^

Przykład:

1100101 = 1 * 2^0^ + 0 * 2^1^ + 1 * 2^2^ + 0 * 2^3^ + 0 * 2^4^ + 1 * 2^5^ + 1 * 2^6^ = 1 + 0 + 4 + 0 + 0 + 32 + 64 = 101

Tak wiec liczba 1100101 w systemie dwójkowym jest równa liczbie 101 w systemie dziesiętnym.
Liczby można również zamieniać w odwrotny sposób czyli z systemu dziesiętnego na dwójkowy.
Aby to zrobić wystarczy dzielić liczbę w systemie dziesiętnym przez 2 tak długo aż zostanie nam liczba jeden (jedynkę tez dzielimy)  i przy każdym dzieleniu zapisywać resztę z tego dzielenia ( 1 albo 0 ). Potem zapisujemy reszty w odwrotnej kolejności jako ciąg cyfr.

Przykład:  

|41/2 = 20|r.1|  
|---------|---|  
|20/2 = 10|r.0|  
|10/2 = 5|r.0|  
|5/2 = 2|r.1|  
|2/2 = 1|r.0|  
|1/2 = 0|r.1|  

Czytając reszty od tyłu wychodzi nam liczba 101001 tak wiec liczba 41 w systemie dziesiętnym jest równa liczbie 101001 w systemie dwójkowym
  

## 2. Ósemkowy system liczbowy 

Do zapisu liczb w tym systemie wykorzystuje się  8 cyfr: 0, 1, 2, 3, 4, 5, 6, 7  
Podstawą pozycji zaś są kolejne potęgi liczby 8. 
W praktyce wygląda to tak :

Jak w każdym systemie pozycyjnym o wartości cyfry stanowi pozycja na której ona stoi więc cyfrę stojącą na pierwszej pozycji  mnożymy  razy 8^0^ ,  cyfrę na 2 pozycji  mnożymy razy 8^1^, cyfrę na 3 pozycji  mnożymy razy 8^2^ itd.

  Przykład:
  174 = 4 * 8^0^ + 7 * 8^1^ + 1 * 8^2^  = 4 + 56 + 64 = 124

Tak wiec liczba 174 w systemie ósemkowym jest równa liczbie 124 w systemie dziesiętnym.
Liczby można również zamieniać w odwrotny sposób czyli z systemu dziesiętnego na ósemkowy. Aby to zrobić wystarczy dzielić liczbę w systemie dziesiętnym przez 8 tak długo aż zostanie nam liczba mniejsza niż 8 (tą liczbę też dzielimy tez dzielimy) i przy każdym dzieleniu zapisywać resztę z tego dzielenia ( 0, 1, 2, 3, 4, 5, 6 albo 7 ). Potem zapisujemy reszty w odwrotnej kolejności jako ciąg cyfr.

Przykład:  

|167/8 = 20|r.7|  
|----------|---|  
|20/8 = 2|r.4|  
|2/8 = 0|r.2|  

Czytając reszty od tyłu wychodzi nam liczba 247 tak wiec liczba 167 w systemie dziesiętnym jest równa liczbie 247 w systemie ósemkowym.


## 3. Szestanstkowy system liczbowy 

Do zapisu liczb w tym systemie wykorzystuje się 16 znaków ( 10 cyfr i 6 liter ):
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F 
  Podstawą  pozycji zaś są kolejne potęgi liczby 16. W praktyce wygląda to tak :
 
  Jak w każdym systemie pozycyjnym o wartości cyfry stanowi pozycja na której ona stoi więc
  znak stojący na pierwszej pozycji  mnożymy  razy 16^0^ ,  znak  na 2 pozycji  mnożymy razy 16^1^,
  znak na 3 pozycji  mnożymy razy 16^2^ itd.

  UWAGA ! Litery w tym systemie traktowane są jako następujące liczby:
                  A = 10, B = 11, C = 12, D = 13, E = 14, F = 15

  Przykład:
  D3A = 10 * 16^0^ + 3 * 16^1^ + 13 * 16^2^  = 10 + 48 + 3328 = 3386

  Tak wiec liczba D3A w systemie dwójkowym jest równa liczbie 3386 w systemie dziesiętnym.

  Liczby można również zamieniać w odwrotny sposób czyli z systemu dziesiętnego na szesnastkowy.
  Aby to zrobić wystarczy dzielić liczbę w systemie dziesiętnym przez 16 tak długo aż zostanie nam
  liczba mniejsza niż 16 (tą liczbę też dzielimy )  i przy każdym dzieleniu zapisywać resztę z tego
  dzielenia ( w przypadku liczby większej niż 9 stosujemy litery ). Potem zapisujemy reszty w
  odwrotnej kolejności jako ciąg cyfr.

  Przykład:
 
 |3738/16 = 233|r.A|  
 |-------------|---|  
  |233/16 = 14 |r.9|
  |14/16 = 0|r.E|

  Czytając reszty od tyłu wychodzi nam liczba E9A tak wiec liczba 3738 w systemie dziesiętnym
  jest równa liczbie E9A w systemie szesnastkowym.