/*
** tools.c for tools in /home/azriel/Epitech/CPE_2016_stumper5/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri May 19 13:23:58 2017 Thomas Dominé
** Last update Fri May 19 13:38:06 2017 Thomas Dominé
*/

#include "my.h"

int			my_putchar(char c)
{
	if (write(1, &c, 1) == - 1)
		return (1);
	return (0);
}

int			my_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (my_putchar(str[i]) == -1)
			return (1);
		i += 1;
	}
	return (0);
}

int			my_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i += 1;
	return (i);
}

int			my_isnum(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i += 1;
	}
	return (0);
}

int			my_strcmp(char *str, char *compare)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != compare[i])
			return (1);
		i += 1;
	}
	if (compare[i] != '\0')
		return (1);
	return (0);
}
