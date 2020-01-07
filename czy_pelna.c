int pelna(char plansza[n][n])
{
    int i, j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (plansza[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
