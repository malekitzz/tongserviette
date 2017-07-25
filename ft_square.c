/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukuntzm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:28:10 by jukuntzm          #+#    #+#             */
/*   Updated: 2017/07/25 18:23:32 by jukuntzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_print_square(int **square, int tab, char *param)
{
	int x;
	int y;
	int *squarestart;
	int *squareend;



}
void		valid_square(int **square, int x, int y)
{
	if (x == 1 || y == 1)
		return (0);
	if (square[x][y - 1] >= 1 && square[x - 1][y] >= 1 && square[x - 1][y - 1] >= 1)
		{
			if (square[x][y - 1] <= square[x - 1][y] &&
					square[x][y - 1] <= square[x - 1][y - 1])
				square[x][y] = square[x][y - 1] + 1;
			if (square[x - 1][y - 1] <= square[x][y - 1] &&
					square[x - 1][y - 1] <= square[x - 1][y])
				square[x][y] = square[x - 1][y - 1] + 1;
			if (square[x - 1][y] <= square[x][y - 1] &&
					square[x - 1][y] <= square[x - 1][y - 1])
				square[x][y] = square[x - 1][y] + 1;
		}
}
void	ft_square(int **square, char *param)
{
	int x;
	int y;
	int line;
	int val;

	tab[0][0] = 1;
	x = 0;
	line = param[0];
	while (x < line)
	{
		y = 0;
		while (square[x][y])
		{
			valid_square(square, x, y);
			if (square[x][y] > val)
				val = square[x][y];
			y++;
		}
		x++;
	}
	ft_print_square(square, tab, param);
}
