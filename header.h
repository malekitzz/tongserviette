/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amottier <amottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:11:49 by amottier          #+#    #+#             */
/*   Updated: 2017/07/25 21:49:30 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int 	check_is_valid(char *str);
void	valid_square(int **square, int x, int y);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		get_x(char *str);
int		get_y(char *str);
char	**str_tabchar(char *str, char **tab);
char 	**ft_malloc_tabchar(char **tab, int y, int x);
void	create_tab(char *str);

#endif
