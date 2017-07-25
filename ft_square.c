/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukuntzm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:28:10 by jukuntzm          #+#    #+#             */
/*   Updated: 2017/07/25 21:34:16 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		valid_square(int **square, int x, int y)
{
	if (x == 1 || y == 1)
		return ;
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
