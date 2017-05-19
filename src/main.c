/*
** main.c for main.c in /home/azriel/Epitech/CPE_2016_stumper5/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri May 19 13:10:12 2017 Thomas Dominé
** Last update Fri May 19 14:57:39 2017 Thomas Dominé
*/

#include "my.h"

int		*init_num(char *str, t_data *data)
{
	int		i;

	i = 0;
	if (my_isnum(str) == 1 || str[0] == '\0')
	{
		my_putstr("Invalid number\n");
		return (NULL);
	}
	data->len = my_strlen(str);
	if (!(data->nb = malloc(sizeof(int) * (my_strlen(str)))))
		return (NULL);
	while (str[i] != '\0')
	{
		data->nb[i] = str[i] - 48;
		i += 1;
	}
	return (data->nb);
}

int			init_str(char *str, t_data *data)
{
	if (str[0] != '\0')
		if ((data->str = my_strcpy(str)) == NULL)
			return (84);
	return (0);
}

int			init_data(char **av, int ac, int i, t_data *data)
{
	if (my_strcmp(av[i], "-n") == 0 && i + 1 < ac)
		if (init_num(av[i + 1], data) == NULL)
		return (84);
	if (my_strcmp(av[i], "-s") == 0 && i + 1 < ac)
		if (init_str(av[i + 1], data) == 84)
			return (84);
	return (0);
}

int		verif_arg(int ac, char **av)
{
	int		i;
	int		bol;

	i = 0;
	bol = 0;
	while (i < ac)
	{
		if (my_strcmp(av[i], "-n") == 0)
			bol = 1;
		i += 1;
	}
	if (bol == 0)
		return (84);
	return (0);
}

int			main(int ac, char **av)
{
	int		i;
	t_data	*data;

	i = 1;
	if (!(data = malloc(sizeof(t_data))))
		return (84);
	data->str = NULL;
	if (ac < 3 || ac > 5)
		return (84);
	if (verif_arg(ac, av) == 84)
		return (84);
	while (i < ac)
	{
		if (init_data(av, ac, i, data) == 84)
			return (84);
		i += 1;
	}
	return (0);
}
