void ruch_graczaX(char plansza[n][n])
{
    int i=n, j=n, confij=1;
while(cofnij==1)
 {
    wypisz(plansza);
    printf("Ruch gracza 'X'!");
    while ((i>n-1)||(j>n-1) || (plansza[i][j]!=' ') || (plansza[i][j]=='O'))
    {
        printf("Podaj wiersz i kolumnê w której chcesz wstawiæ krzy¿yk\n");
        scanf("%d %d", &i, &j);
    }
plansza[i][j]='X';
wypisz(plansza);
printf("Czy chcia³byœ cofn¹æ swój ruch?\n 1.Tak\n 2.Nie\n");
scanf("%d", &cofnij);
    if(confnij==1)
     {
        plansza[i][j]=' ';
     }
 }
}
