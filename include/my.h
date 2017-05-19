/*
** my.h for colle5 in /home/byliarus/work/colles/CPE_2016_stumper5/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 13:06:59 2017 Pierre Narcisi
** Last update Fri May 19 15:23:32 2017 Pierre Narcisi
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

/*
print_nb.c
*/
void	print_0(char c, char **tab);
void	print_1(char c, char **tab);
void	print_2(char c, char **tab);
void	print_3(char c, char **tab);
void	print_4(char c, char **tab);

/*
print_nb.c
*/
void	print_5(char c, char **tab);
void	print_6(char c, char **tab);
void	print_7(char c, char **tab);
void	print_8(char c, char **tab);
void	print_9(char c, char **tab);

#endif
