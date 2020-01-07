int wczytaj(FILE *ile, int n)
{
	if((ile=fopen("ile.txt", "r"))==NULL)
	{
	printf("Brak pliku do wczytania...");
	exit(1);
	}
	fscanf(ile,"%d", &n);
	fclose(ile);
	return n;
}
