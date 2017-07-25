/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amottier <amottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:01:05 by amottier          #+#    #+#             */
/*   Updated: 2017/07/25 19:47:53 by amottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_atoi(char *str)
{
	int i;
	int var;

	i = 0;
	var = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		var = var * 10 + (str[i++] - '0');
	return (var);
}

int get_x(char *str)
{
	int i;
	char *lines;
	int line_nb;
	int l;

	l = 0;
	i = 0;

	while (str[i])
	{
		if (str[i] == '\n')
		{
			i++;
			while (str[i] != '\n')
			{
				l++;
				i++;
			}
		return (l);
		}
		i++;
	}
	return (0);
}

int get_y(char *str)
{
	int i;
	int l;

	l = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			l++;
		i++;
	}
	return (l);
}

char **str_tabchar(char *str, char **tab)
{
	int len;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	len = ft_strlen(str);
	while (str[k] != '\n')
		k++;
	k++;
	while (k < len - 1)
	{
		if (str[k] == '\n')
		{
			j = 0;
			i++;
		}
		else
			tab[i][j++] = str[k];
			j++;
		k++;
	}
	return (tab);
}

char 	**ft_malloc_tabchar(char **tab, int y, int x)
{
	int i;
	int j;	

	if (y == 0)
		return (0);
	if (!(tab = (char**)malloc(sizeof(char*) * y)))
		return (0);
	i = 0;

	while(i < y)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * x)))
			return (0);
		i++;
	}
	if(j == 0)
		return (0);
	return (tab);
}


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





void	create_tab(char *str)
{
	char	**tab;
	int 	y;
	int 	x;

	y = get_y(str);
	x = get_x(str);
	printf("x = %d, y = %d \n", x, y);
	tab = ft_malloc_tabchar(tab, y, x);
	tab = str_tabchar(str, tab);
	// printf("x = %d, y = %d \n", x, y);
}
