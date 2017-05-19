/*
** my.h for colle5 in /home/byliarus/work/colles/CPE_2016_stumper5/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 13:06:59 2017 Pierre Narcisi
** Last update Fri May 19 13:39:51 2017 Pierre Narcisi
*/

#ifndef _MY_H
# define  _MY_H

typedef struct s_nb_tab
{
  int          nb;
  void         (*print)(char c, char **tab);
}              t_nb_tab;

#endif
