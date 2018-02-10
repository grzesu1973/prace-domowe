### Preprocesor
*Preprocesor* jest „pomocnikiem” kompilatora, zajmuje się on np. wstawianiem treści plików nagłówkowych do plików z kodem za pomocą instrukcji #include. Preprocesor należy rozumieć jako prymitywny edytor tekstu dokonujący „korekcji” plików z kodem źródłowym przed rozpoczęciem ich przetwarzania przez kompilator.
Jakie są zalety wykorzystywania tych rozwiązań w kodzie? Tak naprawdę w języku C w czasach przed wprowadzeniem słowa kluczowego inline umożliwiały wstawianie kodu we wskazane miejsce. Należy bowiem pamiętać że każdorazowe wstawienie makroinstrukcji powoduje ingerencję w kod źródłowy (innymi słowy we wskazanym miejscu zostanie wstawiony stosowny fragment kodu). Łatwo obserwowalnym efektem częstego wykorzystywania makr w plikach z kodem jest rozrost pliku binarnego oraz jego szybsze działanie. 
Pisząc makra należy być świadomy ich specyfiki. W szczególności kod który w dużej części pokryty jest makrami staje się trudny w debugowaniu, co więcej błędy kompilacji mogą być sygnalizowane w zupełnie innych liniach (kompilator przetwarza plik po przejściu preprocesora który rozwija makrodefinicje do zwykłego kodu). I w końcu najważniejsze, makra traktowane jako alternatywa dla funkcji inline nie interpretują typów.

Dopisywanie nawiasów dla parametrów przekazywanych do makra. Poniżej kod prezentujący makro oraz jego użycie majce podnieść wskazaną wartość do kwadratu:

```
/#define POW_2(a) a*a
a = POW_2(a+5); #makro rozwija się do a+5*a+5
```

Jak łatwo zauważyć otrzymany wynik znacznie różni się od oczekiwanej wartości. Powód podany jest w komentarzu i nie wymaga dalszych wyjaśnień. Poprawna implementacja makra POW_2 wygląda następująco:

```
/#define POW_2(a) (a)*(a)

a = POW_2(a+5); #makro rozwija się do (a+5)*(a+5)
```
