#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *zapis, *ile;
int ruch = 1;
char wynik = 0;
int n=0;
int czy;
printf("*OXOXOXOXOXOXOXOXO* KÓ£KO & KRZY¯YK *OXOXOXOXOXOXOXOXO*\n");
printf(" Czy wczytaæ zapisan¹ grê?\n 1.Tak 2.Nie\n");
scanf("%d", &czy);
if(czy==1)
{
wczytaj(ile, n);
n=wczytaj(ile, n);
char plansza[n][n];
wczytaj_plansze(zapis, plansza, n);
plansza = wczytaj_plansze(zapis, plansza, n);
}
else
{
printf(" Gra któr¹ wszyscy znaj¹ i kochaj¹!\n Skrót zasad:\n");
printf(" 1.Zaczyna gracz 'O'\n 2.Ty wybierasz ile pól ma plansza!(minimum 3)\n");
printf(" 3.Wygrywa gracz, który jako pierwszy doda takie same symbole od krawêdzi do krawêdzi planszy lub po przek¹tnej\n\n");
while(n<3)
{
    printf("Wybierz iloœæ pól wiêksz¹ lub równ¹ 3\n");
    scanf("%d", &n);
}
char plansza[n][n];
}
wyczysc(plansza);
    while(wynik==0)
    {
        if(ruch==0)
        {
            ruch_graczaX(plansza);
        }
        else
        {
            ruch_graczaO(plansza);
        }
        printf("\nZapisaæ grê?\n 1.Tak 2.Nie\n");
        scanf("%d", &czy);
        if(czy==1)
        {
            zapisz(zapis, ile, n, plansza);
		}
        ruch=1-ruch;
        wynik=sprawdz(plansza);
    }
wypisz(plansza);
    if(wynik==1)
    {
        printf("Remis\n");
    }
    else if(wynik=='X')
    {
        printf("Wygra³ gracz 'X'!\n");
    }
    else if(wynik=='O')
    {
        printf("Wygra³ gracz 'O'!\n");
    }
return 0;
}
