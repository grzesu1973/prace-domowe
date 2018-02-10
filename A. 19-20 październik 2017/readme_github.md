# Podstawy Programowania - pierwsze repozytorium


### 1) Środowisko pracy

 * Uruchomieie wirtualnej maszyny np."VirtualBox" w środowisku Windows 
 * Instalacja jednej z dystrybucji linux np. Ubuntu *(jeśli to możliwe linux obok windows, lub sam linux jako system główny)*

#### 2) Utworzenie katalogu pracy na pulpicie w trybie komend


```
$ cd Pulpit             /przejście do katalogu pulpitu/
$ mkdir Repo            /utworzenie katalogu Repo/
$ cd Repo               /przejście do katalogu Repo/		
```

#### 3)  Utworzenie pustego pliku tekstowego
```
$ touch test.txt                /tworzy pusty plik tekstowy o nazwie test.txt/
```
#### 4) Instalacja edytora tekstu *nano*
```
$ sudo apt-get install nano
```
 
#### 5) Instalacja pakietu  *git*
```
$ sudo apt-get install git
```

#### 6) Założenie konta i jego konfiguracja w serwisie GitHub.com

#### 6) Podstawowe polecenia *git*

```
$ git init                          /inicjalizacja nowego repozytorium git w bierzącym katalogu/
$ git add <nazwa pliku>             /dodanie pliku do trepozytorium/
$ git add *                         /dodanie wszystkich plików z katalogu/
$ git add .                         /dodaje wszystkie zmiany w plikach/
$ git commit -m "utworzenie nowego pliku"               /dodanie komentarza do pliku/
$ git status                        /pokazuje status repozytorium (pokazuje informację o zmodyfikowanych, nowych, usuniętych oraz nie należące do repozytorium plikach/
$ git config --global user.email "grzesu1973@gmail.com"     /ustawienie adresu e'mail/ 
$ git config --global user.name "grzesu1973"                /ustawienie nazwy użytkownika/

$ git remote add origin https://github.com/grzesu1973/Repo.git      /powiązanie repozytorium/
$ git push -u origin master         /przesłanie pliku do repozytorium/
$ git log                           /wyświetla logi/
```
