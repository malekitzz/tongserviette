/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_grille.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:27:26 by macuguen          #+#    #+#             */
/*   Updated: 2017/07/25 16:27:28 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i] != '\0')
	{
		i++;
	}
	return (i);
}
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_addloc(char *str, char *c)
{
	int		i;
	int		j;
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(c)) + 1));
	i = 0;
	while (str && str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	j = 0;
	while (c[j] != '\0')
	{
		new_str[i] = c[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	if (str)
		free(str);
	return (new_str);
}

int   get_id_file(int ac, char **av)
{
  int   fd;

  fd = 0;
  if (ac == 1)
    return (fd);
  fd = open(av[1], O_RDONLY);
    return (fd);
}

char	*read_stdi(fd)
{
	char	c[1001];
	char	*result;
	int		size;

	result = NULL;
	while ((size = read(fd, c, 1000)) > 0)
	{
		c[size] = '\0';
		result = ft_addloc(result, c);

	}
	return (result);
}

int main(int argc, char **argv)
{
  int fd;

  fd = get_id_file(argc, argv);
  if (ft_putstr(read_stdi(fd) == NULL)
      return (0);
  close(fd);
  return 0;
}
