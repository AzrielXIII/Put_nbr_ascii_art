/*
** print_nb2.c for colles5 in /home/byliarus/work/colles/CPE_2016_stumper5/src/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 19 14:48:48 2017 Pierre Narcisi
** Last update Fri May 19 15:09:24 2017 Pierre Narcisi
*/

void print_5(char c, char **tab)
{
  int i;
  int j;
  int k;

  i = 0;
  while (i < 5)
  {
    j = 0;
    k = 0;
    while (tab[i][k] != '\0')
      k++;
    while (j < 5)
      {
        if (i == 0 || ((i == 2 || i == 4) && j != 4))
          tab[i][j + k] = c;
        else
          tab[i][j + k] = ' ';
        j++;
      }
      i++;
  }
  tab[1][0] = c;
  tab[3][4] = c;
}

void print_6(char c, char **tab)
{
  int i;
  int j;
  int k;

  i = 0;
  while (i < 5)
  {
    j = 0;
    k = 0;
    while (tab[i][k] != '\0')
      k++;
    while (j < 5)
      {
        if ((i == 0 || i == 2 || i == 4) && (j != 0 && j != 4))
          tab[i][j + k] = c;
        else
          tab[i][j + k] = ' ';
        j++;
      }
      i++;
  }
  tab[1][0] = c;
  tab[2][0] = c;
  tab[3][4] = c;
  tab[3][0] = c;
}

void print_7(char c, char **tab)
{
  int i;
  int j;
  int k;

  i = 0;
  while (i < 5)
  {
    j = 0;
    k = 0;
    while (tab[i][k] != '\0')
      k++;
    while (j < 5)
      {
        if (i == 0 || j + i == 5)
          tab[i][j + k] = c;
        else
          tab[i][j + k] = ' ';
        j++;
      }
      i++;
  }
}

void print_8(char c, char **tab)
{
  int i;
  int j;
  int k;

  i = 0;
  while (i < 5)
  {
    j = 0;
    k = 0;
    while (tab[i][k] != '\0')
      k++;
    while (j < 5)
      {
        if ((i == 0 || i == 2 || i == 4) && (j != 0 && j != 4)
        || ((i == 1 || i == 3) && (j == 0 || j == 4)))
          tab[i][j + k] = c;
        else
          tab[i][j + k] = ' ';
        j++;
      }
      i++;
  }
}

void print_9(char c, char **tab)
{
  int i;
  int j;
  int k;

  i = 0;
  while (i < 5)
  {
    j = 0;
    k = 0;
    while (tab[i][k] != '\0')
      k++;
    while (j < 5)
      {
        if ((i == 0 || i == 2 || i == 4) && (j != 0 && j != 4))
          tab[i][j + k] = c;
        else
          tab[i][j + k] = ' ';
        j++;
      }
      i++;
  }
  tab[1][0] = c;
  tab[1][4] = c;
  tab[2][4] = c;
  tab[3][4] = c;
}
