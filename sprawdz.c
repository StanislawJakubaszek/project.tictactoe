char sprawdz(char plansza[n][n])
{
for(int i=0;i<n;i++)
{
    if(plansza[i][0]!=' ')
    {
        for(int j=0;j<n;j++)
        {
            if(plansza[i][j]!=plansza[i][j+1])
            {
                return 0;
            }
        }
        return plansza[i][0];
    }

    if(plansza[0][i]!=' ')
    {
        for(int j=0;j<n;j++)
        {
            if(plansza[j][i]!=plansza[j+1][i])
            {
                return 0;
            }
        }
        return plansza[0][i];
    }

} //for

//przekatne
if(plansza[0][0]!=' ')
{
    for(int j=0; j<n; j++)
        {
        if(plansza[j][j]!=plansza[j+1][j+1])
            {
                return 0;
            }
        }
    return plansza[0][0];
}

if (plansza[n-1][0]!=' ')
{
    int j=0;
    for(int i=n-1; i>0; i--)
    {
        if(plansza[i][j]!=plansza[i-1][j+1])
            {
                return 0;
            }
            j++;
    }
    return plansza[n-1][0];
}

//remis
if(pelna(plansza)==1)
    {
        return 1;
    }
return 0;
}
