char wczytaj_plansze(FILE *zapis, char plansza[n][n], int n)
{
	if((zapis=fopen("zapis.txt", "r"))==NULL)
	{
		printf("Brak pliku do wczytania...");
		exit(1);
	}
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n; j++)
	{
	fscanf(zapis, "%c", &plansza[i][j]);
	}
	}
	fclose(zapis);
	return plansza[n][n];
}