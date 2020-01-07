program:main.o czy_pelna.o ruch_gracza.o ruch_gracza2.o sprawdz.o wczytaj.o wczytajplansze.o wyczysc_plansze.o wypisz.o zapis.o
	gcc -lm -g -o program main.o czy_pelna.o ruch_gracza.o ruch_gracza2.o sprawdz.o wczytaj.o wczytajplansze.o wyczysc_plansze.o wypisz.o zapis.o

main.o:main.c
	gcc -c main.c

czy_pelna.o:czy_pelna.c
	gcc -c czy_pelna.c

ruch_gracza.o:ruch_gracza.c
	gcc -c ruch_gracza.c

ruch_gracza2.o:ruch_gracza2.c
	gcc -c ruch_gracza2.c

sprawdz.o:sprawdz.c
	gcc -c sprawdz.c

wczytaj.o:wczytaj.c
	gcc -c wczytaj.c

wczytajplansze.o:wczytajplansze.c
	gcc -c wczytajplansze.c

wyczysc_plansze.o:wyczysc_plansze.c
	gcc -c wyczysc_plansze.c

wypisz.o:wypisz.c
	gcc -c wypisz.c

zapis.o:zapis.c
	gcc -c zapis.c
