/*
** tool2.c for tools2.c in /home/azriel/Epitech/CPE_2016_stumper5/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri May 19 13:58:36 2017 Thomas Dominé
** Last update Fri May 19 15:41:03 2017 Thomas Dominé
*/

#include "my.h"

char		*my_strcpy(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = malloc(sizeof(char) * (my_strlen(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		tmp[i] = str[i];
		i += 1;
	}
	tmp[i] = '\0';
	return (tmp);
}

int			print_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (my_putstr(tab[i]) == 84)
			return (84);
		if (my_putchar('\n') == 84)
			return (84);
		i += 1;
	}
	return (0);
}

void		my_free_struct(t_data *data)
{
	int		i;

	i = 0;
	while (data->tab[i] != NULL)
	{
		free(data->tab[i]);
		i += 1;
	}
	free(data->tab);
	free(data->nb);
	free(data->str);
	free(data);
}
