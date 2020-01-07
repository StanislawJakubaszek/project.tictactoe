void wypisz(char plansza[n][n])
{
    system("clear");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==n-1)
            {
                printf("[%c]\n", plansza[i][j]);
            }
            else
            {
                printf("[%c]|", plansza[i][j]);
            }
        }
        if(i!=n-1)
        {
        for(int x=0; x<n; x++)
        {
            printf("-")
        }
        }
        printf("\n");
    }
}
