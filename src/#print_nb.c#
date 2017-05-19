/*
** print_nb.c for colle5 in /home/byliarus/work/colles/CPE_2016_stumper5/src/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 13:37:12 2017 Pierre Narcisi
** Last update Fri May 19 14:49:33 2017 Pierre Narcisi
*/

void	print_0(char c, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i < 5)
    {
      j = 0;
      k = 0;
      while (tab[i][k] != '\0')
	k++;
      while (j < 5)
	{
	  if (((i == 0 || i == 4) && (j != 0 && j != 4))
	      || (((j == 0 || j == 4) && (i != 0 && i != 4))))
	    tab[i][j + k] = c;
	  else
	    tab[i][j + k] = ' ';
	  j++;
	}
      i++;
    }
}

void	print_1(char c, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i < 5)
    {
      j = 0;
      k = 0;
      while (tab[i][k] != '\0')
	k++;
      while (j < 5)
	{
	  if (j == 2 || j == 3)
	    tab[i][j + k] = c;
	  else
	    tab[i][j + k] = ' ';
	  j++;
	}
      i++;
    }
  tab[0][1 + k] = c;
  tab[1][k] = c;
  tab[4][1 + k] = c;
  tab[4][4 + k] = c;
}

void	print_2(char c, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i < 5)
    {
      j = 0;
      k = 0;
      while (tab[i][k] != '\0')
	k++;
      while (j < 5)
	{
	  if (i == 4 || (i == 0 && (j != 0 && j != 4))
	      || (i == 1 && (j == 0 || j == 4)))
	    tab[i][j + k] = c;
	  else
	    tab[i][j + k] = ' ';
	  j++;
	}
      i++;
    }
  tab[2][3 + k] = c;
  tab[3][1 + k] = c;
}

void	print_3(char c, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i < 5)
    {
      j = 0;
      k = 0;
      while (tab[i][k] != '\0')
	k++;
      while (j < 5)
	{
	  if (((i == 0 || i == 4) && j != 4)
	      || (i == 2 && (j != 0 && j != 4)))
	    tab[i][j + k] = c;
	  else
	    tab[i][j + k] = ' ';
	  j++;
	}
      i++;
    }
  tab[1][4 + k] = c;
  tab[3][4 + k] = c;
}

void	print_4(char c, char **tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i < 5)
    {
      j = 0;
      k = 0;
      while (tab[i][k] != '\0')
	k++;
      while (j < 5)
	{
	  if (i == 3 || j == 3)
	    tab[i][j + k] = c;
	  else
	    tab[i][j + k] = ' ';
	  j++;
	}
      i++;
    }
  tab[0][2 + k] = c;
  tab[1][1 + k] = c;
  tab[2][0 + k] = c;
}
