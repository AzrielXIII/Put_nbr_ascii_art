/*
** handle.c for colle5 in /home/byliarus/work/colles/CPE_2016_stumper5/src/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 13:14:08 2017 Pierre Narcisi
** Last update Fri May 19 16:07:05 2017 Pierre Narcisi
*/

#include "my.h"

static t_nb_tab g_print[11] = {
  {0, print_0},
  {1, print_1},
  {2, print_2},
  {3, print_3},
  {4, print_4},
  {5, print_5},
  {6, print_6},
  {7, print_7},
  {8, print_8},
  {9, print_9},
  {-1, NULL}
};

void	print_space(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (i < 5)
    {
      j = 0;
      while (tab[i][j] != '\0')
        j++;
      tab[i][j] = ' ';
      i++;
    }
}

void	handle_nb(t_data *data)
{
  int	i;
  int	j;

  j = 0;
  while (j < data->len)
    {
      i = 0;
      while (g_print[i].nb != -1 && g_print[i].nb != data->nb[j])
          i++;
      if (data->str != NULL && data->nb[i] <= my_strlen(data->str))
      {
        my_putstr(data->str);
        g_print[i].print(data->str[data->nb[i]], data->tab);
      }
      else
        g_print[i].print('0', data->tab);
      if (j != data->len - 1)
        print_space(data->tab);
      j++;
    }
}
