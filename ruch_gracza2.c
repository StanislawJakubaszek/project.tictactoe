void ruch_graczaO(char plansza[n][n])
{
    int i=n, j=n, cofnij=1;
while(cofnij==1)
 {
    wypisz(plansza);
    printf("Ruch gracza 'O'!");
    while ((i>n-1)||(j>n-1) || (plansza[i][j]!=' ') || (plansza[i][j]=='X'))
    {
        printf("Podaj wiersz i kolumn� w kt�rej chcesz wstawi� k�ko\n");
        scanf("%d %d", &i, &j);
    }
plansza[i][j]='O';
wypisz(plansza);
printf("Czy chcia�by� cofn�� sw�j ruch?\n 1.Tak\n 2.Nie\n");
scanf("%d", &cofnij);
    if(confnij==1)
     {
        plansza[i][j]=' ';
     }
 }
}
