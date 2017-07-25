
int check_is_valid(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '.' || str[i] != 'o')
			return (0);
		i++;
	}
	return (1);
}

int   check_is_valid_number(char *str)
{
	int i;
	int k;
	int j;

	k = 0;
	i = 0;
	while (str[k] != '\n')
		k++;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\n')
			j++;
		if (j != k)
			return (0);
				i++;
	}
	return (1);
}

int count_line(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			j++;
		i++;
	}
	return (j);
}
