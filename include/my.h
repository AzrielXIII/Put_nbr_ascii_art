/*
** my.h for colle5 in /home/byliarus/work/colles/CPE_2016_stumper5/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 13:06:59 2017 Pierre Narcisi
** Last update Fri May 19 15:16:05 2017 Thomas Dominé
*/

#ifndef _MY_H
# define  _MY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_nb_tab
{
  int          nb;
  void         (*print)(char c, char **tab);
}              t_nb_tab;

typedef	struct	s_data
{
	int			len;
	int			*nb;
	char		*str;
	char		**tab;
}				t_data;


/*
tools.c
*/
int		my_putchar(char c);
int		my_isnum(char *str);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_strcmp(char *str, char *compare);

/*
tool2.c
*/
char	*my_strcpy(char *str);

/*
create_tab.c
*/
int		create_tab(t_data *data);

#endif
