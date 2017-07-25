
int		**algo(char **tab, char open, char block)
{
	int i;
	int j;
	int size;
	int **tableau;
	int max;

	max = 0;
	size = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if(tab[i][j] == open)
				tableau[i][j] = 1;
			if(tab[i][j] == block)
				tableau[i][j] = 0;
			if(tab[i][j] != block || tab[i][j] != open || tab[i][j] != '\n')
				return(0);
			// manque sizecorner
			j++;
		}
		i++;
	}
	return (tableau);
}


