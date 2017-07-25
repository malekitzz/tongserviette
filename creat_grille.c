/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_grille.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amottier <amottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:27:26 by macuguen          #+#    #+#             */
/*   Updated: 2017/07/25 19:37:35 by amottier         ###   ########.fr       */
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

int   get_id_file(int ac, char **av, int *i)
{
  int   fd;

  fd = 0;
  if (ac == 1)
    return (fd);
  fd = open(av[*i], O_RDONLY);
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
  char *str;
  int i;

  i = 1;
  while (i < argc)
  {
    fd = get_id_file(argc, argv, &i);
    str = read_stdi(fd);
    ft_putstr(str);
  //if ((check_is_valide(str)) == 0)
  //    ft_putstr("error");
  close(fd);
    i++;
  }
  return 0;
}