#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *zapis, *ile;
int ruch = 1;
char wynik = 0;
int n=0;
int czy;
printf("*OXOXOXOXOXOXOXOXO* KӣKO & KRZY�YK *OXOXOXOXOXOXOXOXO*\n");
printf(" Czy wczyta� zapisan� gr�?\n 1.Tak 2.Nie\n");
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
printf(" Gra kt�r� wszyscy znaj� i kochaj�!\n Skr�t zasad:\n");
printf(" 1.Zaczyna gracz 'O'\n 2.Ty wybierasz ile p�l ma plansza!(minimum 3)\n");
printf(" 3.Wygrywa gracz, kt�ry jako pierwszy doda takie same symbole od kraw�dzi do kraw�dzi planszy lub po przek�tnej\n\n");
while(n<3)
{
    printf("Wybierz ilo�� p�l wi�ksz� lub r�wn� 3\n");
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
        printf("\nZapisa� gr�?\n 1.Tak 2.Nie\n");
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
        printf("Wygra� gracz 'X'!\n");
    }
    else if(wynik=='O')
    {
        printf("Wygra� gracz 'O'!\n");
    }
return 0;
}
