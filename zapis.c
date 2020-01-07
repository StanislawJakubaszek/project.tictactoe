void zapisz(FILE *zapis, FILE *ile, int n, char plansza[n][n])
{
	ile=fopen("ile.txt", "w");
	fprintf(ile,"%d",&n);
	fclose(ile);

	zapis=fopen("zapis.txt", "w");
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n; j++)
	{
	fprintf(zapis, "%c", &plansza[i][j]);
	}
	}
	fclose(zapis);
}
