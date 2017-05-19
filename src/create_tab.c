/*
** create_tab.c for create tab.c in /home/azriel/Epitech/CPE_2016_stumper5/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri May 19 15:01:52 2017 Thomas Dominé
** Last update Fri May 19 15:18:43 2017 Thomas Dominé
*/

#include "my.h"

int	create_tab(t_data *data)
{
  int	x;
  int	y;
  int	nb_cols;
  
  y = 0;
  nb_cols = data->len * 5 + data->len;
  if (!(data->tab = malloc(sizeof(char *) * (5 + 1))))
    return (84);
  while (y < 5)
    {
      if (!(data->tab[y] = malloc(sizeof(char) * nb_cols)))
	return (84);
      x = 0;
      while (x < nb_cols)
	{
	  data->tab[y][x] = '\0';
	  x += 1;
	}
      y += 1;
    }
  data->tab[y] = NULL;
  return (0);
}
